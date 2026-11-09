#!/usr/bin/env python3
"""Debug: check Ghidra memory blocks vs raw file."""
import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()
from ghidra.base.project import GhidraProject

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    mem = program.getMemory()
    print("=== memory blocks ===")
    for b in mem.getBlocks():
        print(f"  {b.getName()}: {b.getStart()}-{b.getEnd()} size={b.getSize()} type={b.getType()} init={b.isInitialized()}")
    BASE = 0x08000000
    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE + off)
    # compare Ghidra memory vs raw file at several offsets
    with open('/home/z/thinkdiag/downloads/tdmini_extract/Project thinkdiagmini.bin', 'rb') as f:
        raw = f.read()
    for off in [0x0, 0x1000, 0x27A90, 0x28220, 0x3B2AC]:
        try:
            b = bytearray(16)
            mem.getBytes(addr(off), b)
            fileb = raw[off:off+16]
            match = bytes(b) == fileb
            print(f"0x{off:X}: ghidra={bytes(b).hex()[:32]} file={fileb.hex()[:32]} match={match}")
        except Exception as e:
            print(f"0x{off:X}: ERROR {e}")
finally:
    project.close()
