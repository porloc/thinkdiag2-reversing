#!/usr/bin/env python3
"""Decompile the bootloader OTA crypto chain starting at FUN_0800ad66.
Recursively follows callees up to depth 3, plus fixed targets:
  0x98d0 (ctx init), 0x9a1a (set key), 0x9934 (ctx free),
  0x7bb2 (final verify), 0x7ab6, 0x9dc6, 0xad66
"""
import os, re, sys

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

    def get_func(off):
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        return func

    decompiled = {}
    queue = [(0xad66, 0)]
    fixed = [0x98d0, 0x9a1a, 0x9934, 0x7bb2, 0x7ab6, 0x9dc6, 0xad66]
    for f in fixed:
        if (f, 0) not in queue:
            queue.append((f, 0))

    while queue:
        off, depth = queue.pop(0)
        if off in decompiled or depth > 3:
            continue
        func = get_func(off)
        if func is None:
            print(f"[!] no func at {off:#x}")
            continue
        ep = int(func.getEntryPoint().offset) - BASE
        if ep in decompiled:
            continue
        res = di.decompileFunction(func, 300, monitor)
        if not res.decompileCompleted():
            print(f"[!] decompile fail {ep:#x}")
            continue
        code = res.getDecompiledFunction().getC()
        fname = f'{OUT}/func_0x{ep:X}.c'
        with open(fname, 'w') as f:
            f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
        decompiled[ep] = True
        size = func.getBody().getNumAddresses()
        print(f"[+] 0x{ep:X} size={size}")
        calls = sorted(set(int(m, 16) for m in re.findall(r'FUN_([0-9a-f]{8})', code)))
        if depth < 3:
            for c in calls:
                if (c - BASE) < 0x10000 and (c - BASE) not in decompiled:
                    queue.append((c - BASE, depth + 1))
    print(f"total decompiled: {len(decompiled)}")
    di.dispose()
finally:
    project.close()
print("DONE")
