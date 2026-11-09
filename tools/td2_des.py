#!/usr/bin/env python3
"""Decompile FUN_004bb458 (24-byte key lookup table init), FUN_004bd080, FUN_004bd0d0 (DES core),
FUN_004b907e (hash), FUN_004b27ac (memcpy), and dump table data."""
import os, struct

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand

OUT = '/home/z/thinkdiag/analysis/td2'

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'TD2', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    def addr(a):
        return af.getAddress(a)

    for lo in [0x004BB400, 0x004BB458, 0x004BD000, 0x004BD080, 0x004BD0D0]:
        cmd = DisassembleCommand(addr(lo), None, True)
        cmd.applyTo(program, monitor)

    di = DecompInterface()
    di.openProgram(program)

    def decomp_at(a_int):
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

    for a in [0x004BB458, 0x004BD080, 0x004BD0D0, 0x004B907E, 0x004B27AC, 0x004B2824,
              0x004BE6D8, 0x004BED92]:
        decomp_at(a)
    di.dispose()
    project.save(program)
    program_saved = True
    project.close(program)
finally:
    project.close()
print("DONE")
