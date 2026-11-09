#!/usr/bin/env python3
"""Decompile FUN_080232e2 and its sub-calls (serial source)."""
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

    for off in [0x232e2]:
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            from ghidra.app.cmd.function import CreateFunctionCmd
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        res = di.decompileFunction(func, 180, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'{OUT}/func_0x{off:X}.c', 'w') as f:
                f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
            print(f"[+] decompiled {func.getEntryPoint()} size={func.getBody().getNumAddresses()}")
        else:
            print(f"[!] fail: {res.getErrorMessage()}")

    # who calls FUN_080232e2 and FUN_080234b0?
    rm = program.getReferenceManager()
    for target in [0x232e2, 0x234b0, 0x230ec]:
        print(f"\n=== refs TO 0x{BASE+target:X} ===")
        for r in rm.getReferencesTo(addr(target)):
            frm = r.getFromAddress()
            cf = fm.getFunctionContaining(frm)
            print(f"  from {frm} ({cf.getName() if cf else '?'})")

    di.dispose()
finally:
    project.close()
print("DONE")
