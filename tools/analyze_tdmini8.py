#!/usr/bin/env python3
"""Decompile bootloader command dispatcher + flash write functions."""
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

    # find functions containing these call sites
    sites = [0xC822, 0xC2CA, 0xCF58]
    funcs = set()
    for s in sites:
        f = fm.getFunctionContaining(addr(s))
        if f:
            funcs.add((int(str(f.getEntryPoint()), 16) - BASE, f.getName()))
    print("dispatcher functions:", [(hex(a), n) for a, n in funcs])

    targets = list(funcs) + [(0xcd40, 'FUN_0800cd40'), (0xcd8c, 'FUN_0800cd8c'),
                              (0xd340, 'FUN_0800d340'), (0xd350, 'FUN_0800d350')]
    for off, name in targets:
        func = fm.getFunctionContaining(addr(off))
        if func is None:
            from ghidra.app.cmd.function import CreateFunctionCmd
            CreateFunctionCmd(addr(off)).applyTo(program, monitor)
            func = fm.getFunctionContaining(addr(off))
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
            print(f"[!] fail 0x{off:X}: {res.getErrorMessage()}")

    di.dispose()
finally:
    project.close()
print("DONE")
