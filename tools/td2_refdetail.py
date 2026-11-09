#!/usr/bin/env python3
"""Print all references to the TD2 AES tables area with from-functions."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'TD2', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    monitor = ConsoleTaskMonitor()
    di = DecompInterface()
    di.openProgram(program)

    def addr(a):
        return af.getAddress(a)

    TABLE = 0x004CBDF8
    refs = []
    a = addr(TABLE)
    while a.offset < TABLE + 0x800:
        for ref in rm.getReferencesTo(a):
            refs.append((a.offset, ref.getFromAddress().offset, str(ref.getReferenceType())))
        a = a.add(1)
    print(f"total refs: {len(refs)}")
    for ta, fa, rt in sorted(refs, key=lambda x: x[1]):
        print(f"  from {fa:#x} -> table+{ta-TABLE:#04x} ({rt})")

    # decompile the from-functions that are in [0x4CB000, 0x4CBDF8)
    funs = set()
    for ta, fa, rt in refs:
        f = fm.getFunctionContaining(addr(fa))
        if f:
            funs.add(int(f.getEntryPoint().offset))
    print("\nfunctions using tables:", [hex(x) for x in sorted(funs)])
    for ep in sorted(funs):
        a = addr(ep)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        res = di.decompileFunction(func, 300, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'/home/z/thinkdiag/analysis/td2/func_0x{ep:X}.c', 'w') as fh:
                fh.write(f"// func @ 0x{ep:X}\n" + code)
            print(f"[+] 0x{ep:X}: {len(code)} chars")
    di.dispose()
    project.close(program)
finally:
    project.close()
print("DONE")
