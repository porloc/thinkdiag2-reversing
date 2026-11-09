#!/usr/bin/env python3
"""Decompile DES primitives + all APDU INS= writers + verify chain."""
import os, re

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd

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

    def decomp(off):
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            return None, None
        ep = int(func.getEntryPoint().offset) - BASE
        res = di.decompileFunction(func, 300, monitor)
        if not res.decompileCompleted():
            return ep, None
        code = res.getDecompiledFunction().getC()
        with open(f'{OUT}/func_0x{ep:X}.c', 'w') as f:
            f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
        return ep, code

    # 1. DES primitives from auth cryptogram
    for off in [0x06ee, 0x105c, 0x3de8, 0xbc64, 0x32a2]:
        ep, code = decomp(off)
        print(f"[+] 0x{off:X} -> 0x{ep:X}" if code else f"[!] fail 0x{off:X}")

    # 2. Find ALL functions containing APDU INS writes: *(param_1 + 7) = 0xNN
    #    Scan decompiled code of all functions in [0x0, 0x10000)
    ins_users = {}
    listing = program.getListing()
    funcs = [f for f in fm.getFunctions(True) if int(f.getEntryPoint().offset) < BASE + 0x10000]
    print(f"functions in bootloader region: {len(funcs)}")
    for func in funcs:
        res = di.decompileFunction(func, 120, monitor)
        if not res.decompileCompleted():
            continue
        code = res.getDecompiledFunction().getC()
        for m in re.finditer(r'\*\((undefined1 ?\*|char ?\*)?\s*\([^)]*\+ 7\)\s*=\s*(0x[0-9a-f]+|\d+)', code):
            ep = int(func.getEntryPoint().offset) - BASE
            ins_users.setdefault(ep, set()).add(m.group(2))
    print("APDU INS writers:")
    for ep in sorted(ins_users):
        print(f"  0x{ep:X}: INS={sorted(ins_users[ep])}")
    di.dispose()
finally:
    project.close()
print("DONE")
