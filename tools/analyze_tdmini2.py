#!/usr/bin/env python3
"""Decompile remaining crypto functions + dump literal pool + resolve table pointers."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

OUT = '/home/z/thinkdiag/analysis/tdmini'
BASE = 0x08000000

FUNCS = [0x28108, 0x27be4, 0x280e8, 0x28108]

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    fm = program.getFunctionManager()
    mem = program.getMemory()
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
            with open(f'{OUT}/crypto_0x{off:X}.c', 'w') as f:
                f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
            print(f"[+] decompiled 0x{off:X} ({func.getName()})")
        else:
            print(f"[!] fail 0x{off:X}: {res.getErrorMessage()}")

    # dump literal pool 0x28220-0x28240 (32 bytes) as u32 pointers
    import struct
    pool = bytearray(0x40)
    a = addr(0x28220)
    mem.getBytes(a, pool)
    print("\n=== literal pool @ 0x08028220 ===")
    pool_info = []
    for i in range(0, 0x40, 4):
        v = struct.unpack_from('<I', pool, i)[0]
        off = 0x28220 + i
        pool_info.append((off, v))
        print(f"  [0x{off:X}] = 0x{v:08X}")
    with open(f'{OUT}/literal_pool.txt', 'w') as f:
        for off, v in pool_info:
            f.write(f"0x{off:X}: 0x{v:08X}\n")

    # for each pointer in pool, dump 256 bytes of the table it points to
    for off, v in pool_info:
        if 0x0803B000 <= v < 0x08040000 and v != 0:
            toff = v - BASE
            tb = bytearray(256)
            try:
                mem.getBytes(addr(toff), tb)
                fn = f'{OUT}/table_ptr_0x{off:X}_to_0x{toff:X}.bin'
                with open(fn, 'wb') as f:
                    f.write(bytes(tb))
                print(f"[+] dumped table ptr[0x{off:X}] -> 0x{toff:X} (256 bytes)")
            except Exception as e:
                print(f"[!] table dump fail 0x{off:X}: {e}")

    di.dispose()
finally:
    project.close()
print("DONE")
