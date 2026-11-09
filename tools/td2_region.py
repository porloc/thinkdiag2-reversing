#!/usr/bin/env python3
"""Decompile TD2 crypto region [0x4B8000, 0x4BE5F8+0x2000] (flash) - right around AES tables."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.program.flatapi import FlatProgramAPI
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand
from ghidra.program.util import GhidraProgramUtilities
from ghidra.app.script import GhidraScriptUtil

OUT = '/home/z/thinkdiag/analysis/td2'
BASE = 0x00400000

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'TD2', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    monitor = ConsoleTaskMonitor()
    api = FlatProgramAPI(program)

    def addr(a):
        return af.getAddress(a)

    # disassemble the whole crypto region (file 0xB6000..0xC1000 = flash 0x4B6000..0x4C1000)
    print("disassembling crypto region...")
    REG_LO, REG_HI = 0x004B6000, 0x004C1000
    a = addr(REG_LO)
    while a.offset < REG_HI:
        if program.getListing().getInstructionAt(a) is None:
            cmd = DisassembleCommand(a, None, True)
            cmd.applyTo(program, monitor)
        a = a.add(0x1000)

    # find functions in region
    funs = []
    for f in fm.getFunctions(True):
        ep = int(f.getEntryPoint().offset)
        if REG_LO <= ep < REG_HI:
            funs.append(ep)
    print(f"functions in region: {len(funs)}")
    for ep in sorted(funs):
        print(f"  {ep:#x}")

    # decompile them all
    di = DecompInterface()
    di.openProgram(program)
    for ep in sorted(funs):
        func = fm.getFunctionContaining(addr(ep))
        res = di.decompileFunction(func, 300, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'{OUT}/func_0x{ep:X}.c', 'w') as fh:
                fh.write(f"// func @ 0x{ep:X}\n" + code)
        else:
            print(f"[!] fail 0x{ep:X}")
    di.dispose()
    project.save(program)
    project.close(program)
finally:
    project.close()
print("DONE")
