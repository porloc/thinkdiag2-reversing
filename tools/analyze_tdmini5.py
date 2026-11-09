#!/usr/bin/env python3
"""Decompile FUN_080235b4 (OTA orchestrator) + remaining helpers."""
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

    for off in [0x235b4, 0x285cc, 0x284b2, 0x28434, 0x28bb0, 0x23028, 0x27a4c, 0x225dc, 0x25964]:
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            from ghidra.app.cmd.function import CreateFunctionCmd
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            print(f"[!] no func at 0x{off:X}")
            continue
        res = di.decompileFunction(func, 180, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'{OUT}/func_0x{off:X}.c', 'w') as f:
                f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
            print(f"[+] 0x{off:X} ({func.getName()})")
        else:
            print(f"[!] fail 0x{off:X}")

    # literal pool of FUN_080235b4 region: find pool refs. Also dump pool @ 0x23600-0x236f8
    import struct
    with open('/home/z/thinkdiag/downloads/tdmini_extract/Project thinkdiagmini.bin', 'rb') as f:
        f.seek(0x23600)
        pool = f.read(0x100)
    print("\n=== pool 0x23600-0x23700 ===")
    for i in range(0, 0x100, 4):
        v = struct.unpack_from('<I', pool, i)[0]
        print(f'[0x{0x23600+i:05X}] = 0x{v:08X}')

    di.dispose()
finally:
    project.close()
print("DONE")
