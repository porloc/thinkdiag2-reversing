#!/usr/bin/env python3
"""Debug2: check listing instructions vs getBytes."""
import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()
from ghidra.base.project import GhidraProject

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    mem = program.getMemory()
    listing = program.getListing()
    BASE = 0x08000000
    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE + off)

    # print instructions at 0x27A90
    a = addr(0x27A90)
    cu = listing.getCodeUnitAt(a)
    print("first CU at 0x27A90:", cu)
    it = listing.getCodeUnits(a, True)
    for i in range(10):
        print("  ", it.next())

    # getBytes individual
    for i in range(8):
        b = mem.getByte(addr(0x27A90 + i))
        print(f"byte[0x{0x27A90+i:X}] = {b & 0xFF:02X}")

    # check FileBytes
    print("\n=== file bytes ===")
    for fb in mem.getAllFileBytes():
        print(f"  {fb.getFilename()} size={fb.getSize()}")
        try:
            chunk = fb.getOriginalByte(0x27A90)  # offset within file
            print(f"  orig byte at file off 0x27A90: {chunk & 0xFF:02X}")
        except Exception as e:
            print(f"  err: {e}")
finally:
    project.close()
