#!/usr/bin/env python3
"""Decompile the DB7 function containing the ECB decrypt call (file 0xc9d30) + its chain."""
import os, sys
sys.setrecursionlimit(10000)

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand

OUT = '/home/z/thinkdiag/analysis/db7'

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'DB7', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    def addr(a):
        return af.getAddress(a)

    # disassemble around the ECB call sites
    for lo in range(0x004C9400, 0x004CA400, 0x200):
        cmd = DisassembleCommand(addr(lo), None, True)
        cmd.applyTo(program, monitor)

    di = DecompInterface()
    di.openProgram(program)

    def decomp(a_int):
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
        with open(f'{OUT}/func_0x{ep:X}.c', 'w') as fh:
            fh.write(f"// func @ 0x{ep:X}\n" + code)
        print(f"[+] 0x{ep:X} ({len(code)} chars)")
        return ep

    ep = decomp(0x004C9D30)
    # decompile all functions in [0x4c9400, 0x4ca400)
    for f in fm.getFunctions(True):
        e = int(f.getEntryPoint().offset)
        if 0x004C9400 <= e < 0x004CA400:
            decomp(e)
    di.dispose()
    project.save(program)
    program2 = None
    project.close(program)
finally:
    project.close()
print("DONE")
