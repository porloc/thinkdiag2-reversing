#!/usr/bin/env python3
"""Decompile key derivation chain + find serial buffer writers."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

OUT = '/home/z/thinkdiag/analysis/tdmini'
BASE = 0x08000000

FUNCS = [0x23028, 0x27a4c, 0x27a14, 0x225dc, 0x25964, 0x257b0, 0x257ce, 0x256f4, 0x28cac, 0x1a924, 0x1f3a8, 0x1fb74, 0x1fbdc]

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    fm = program.getFunctionManager()
    monitor = ConsoleTaskMonitor()

    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE + off)

    di = DecompInterface()
    di.openProgram(program)

    for off in FUNCS:
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            from ghidra.app.cmd.function import CreateFunctionCmd
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            print(f"[!] no func at 0x{off:X}")
            continue
        res = di.decompileFunction(func, 120, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'{OUT}/func_0x{off:X}.c', 'w') as f:
                f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
            print(f"[+] decompiled 0x{off:X} ({func.getName()})")
        else:
            print(f"[!] fail 0x{off:X}")

    # find all references to literal pool entries pointing to RAM 0x200151F8
    # scan code for references to 0x08023704 (pool entry holding serial ptr)
    rm = program.getReferenceManager()
    a = addr(0x23704)
    print("\n=== refs to pool entry 0x08023704 (serial ptr) ===")
    for r in rm.getReferencesTo(a):
        frm = r.getFromAddress()
        cf = fm.getFunctionContaining(frm)
        print(f"  from {frm} ({cf.getName() if cf else '?'})")

    # Also search for references to the serial RAM address directly
    print("\n=== searching for 0x200151F8 in code (immediate) ===")
    from ghidra.program.model.scalar import Scalar
    it = program.getListing().getInstructions(True)
    count = 0
    results = []
    while it.hasNext() and count < 200000:
        ins = it.next()
        for op in ins.getOpObjects(1):
            if hasattr(op, 'getValue') and not hasattr(op, 'getAddress'):
                try:
                    v = int(op.getValue())
                    if v == 0x200151F8:
                        results.append(ins.getAddress())
                except Exception:
                    pass
    print(f"  found {len(results)} refs:", [str(r) for r in results[:20]])

    di.dispose()
finally:
    project.close()
print("DONE")
