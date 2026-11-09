#!/usr/bin/env python3
"""Decompile FUN_08007ab6 (chunk decryptor) + storage API."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

OUT = '/home/z/thinkdiag/analysis/tdmini'
BASE = 0x08000000

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE + off)

    di = DecompInterface()
    di.openProgram(program)

    for off in [0x07ab6, 0x067d8, 0x0676c, 0x06ffc, 0x06fc0, 0x06fde, 0x063a4, 0x06ac6, 0x06aa8, 0x075dc]:
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            from ghidra.app.cmd.function import CreateFunctionCmd
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            print(f"[!] no func at 0x{off:X}")
            continue
        res = di.decompileFunction(func, 300, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'{OUT}/func_0x{off:X}.c', 'w') as f:
                f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
            print(f"[+] 0x{off:X} ({func.getName()}) size={func.getBody().getNumAddresses()}")
        else:
            print(f"[!] fail 0x{off:X}")

    di.dispose()
finally:
    project.close()
print("DONE")
