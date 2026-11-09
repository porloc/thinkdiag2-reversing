#!/usr/bin/env python3
"""Decompile the bootloader DOWNLOAD.BIN handler FUN_0800cde2 + neighbors."""
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

    # decompile FUN_0800cde2 and callers
    for off in [0xcde2]:
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            from ghidra.app.cmd.function import CreateFunctionCmd
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        print(f"decompiling {func.getName()} @ {func.getEntryPoint()} size={func.getBody().getNumAddresses()}")
        res = di.decompileFunction(func, 300, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'{OUT}/boot_download_handler.c', 'w') as f:
                f.write(code)
            print(f"[+] wrote boot_download_handler.c ({len(code)} chars)")
        else:
            print(f"[!] fail: {res.getErrorMessage()}")

    # who calls FUN_0800cde2?
    rm = program.getReferenceManager()
    print("\n=== refs TO FUN_0800cde2 ===")
    for r in rm.getReferencesTo(addr(0xcde2)):
        frm = r.getFromAddress()
        cf = fm.getFunctionContaining(frm)
        print(f"  from {frm} ({cf.getName() if cf else '?'})")

    di.dispose()
finally:
    project.close()
print("DONE")
