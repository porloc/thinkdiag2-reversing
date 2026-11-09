#!/usr/bin/env python3
"""DB7: find ECB wrappers & the chunk decrypt path; decompile boot download area."""
import os, struct

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand

OUT = '/home/z/thinkdiag/analysis/db7'
BASE = 0x00400000

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'DB7', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    monitor = ConsoleTaskMonitor()

    def addr(a):
        return af.getAddress(a)

    # disassemble remaining crypto area + boot download area
    for lo in list(range(0x4cb400, 0x4cb800, 0x100)) + list(range(0x408d00, 0x40a600, 0x200)) + [0x409e00, 0x409f00, 0x40a000]:
        cmd = DisassembleCommand(addr(lo), None, True)
        cmd.applyTo(program, monitor)

    di = DecompInterface()
    di.openProgram(program)

    def decomp(a_int, save=True):
        a = addr(a_int)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            print(f"[!] no func at {a_int:#x}")
            return None
        ep = int(func.getEntryPoint().offset)
        res = di.decompileFunction(func, 300, monitor)
        if not res.decompileCompleted():
            print(f"[!] fail {ep:#x}")
            return ep
        code = res.getDecompiledFunction().getC()
        if save:
            with open(f'{OUT}/func_0x{ep:X}.c', 'w') as fh:
                fh.write(f"// func @ 0x{ep:X}\n" + code)
        print(f"[+] 0x{ep:X} ({len(code)} chars)")
        return ep

    # find all functions in [0x4cb400, 0x4cb700) and the boot area
    for f in fm.getFunctions(True):
        ep = int(f.getEntryPoint().offset)
        if 0x4CB400 <= ep < 0x4CB700:
            decomp(ep)

    # find callers of the AES round functions -> ECB wrappers
    for target in (0x4CAD5C, 0x4CAEA0):
        callers = set()
        for ref in rm.getReferencesTo(addr(target)):
            fn = fm.getFunctionContaining(ref.getFromAddress())
            if fn:
                callers.add(int(fn.getEntryPoint().offset))
        print(f"callers of {target:#x}: {[hex(x) for x in sorted(callers)]}")
        for c in sorted(callers):
            decomp(c)

    # callers of ECB wrappers (level 2)
    lvl2 = set()
    for f in fm.getFunctions(True):
        ep = int(f.getEntryPoint().offset)
        if 0x4CB400 <= ep < 0x4CB700 and ep not in (0x4CAD5C, 0x4CADFE, 0x4CAEA0, 0x4CB15C, 0x4CB436):
            for ref in rm.getReferencesTo(addr(ep)):
                fn = fm.getFunctionContaining(ref.getFromAddress())
                if fn:
                    lvl2.add(int(fn.getEntryPoint().offset))
    print("level-2 callers:", [hex(x) for x in sorted(lvl2)])
    for c in sorted(lvl2):
        decomp(c)
    di.dispose()
    project.save(program)
    project.close(program)
finally:
    project.close()
print("DONE")
