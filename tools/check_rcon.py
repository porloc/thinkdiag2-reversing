#!/usr/bin/env python3
"""Get Ghidra listing of key expansion function to resolve Rcon pointer."""
import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()
from ghidra.base.project import GhidraProject

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    listing = program.getListing()
    BASE = 0x08000000
    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE + off)

    # listing for key expansion 0x28180-0x281D0 (the Rcon part)
    it = listing.getCodeUnits(addr(0x28184), True)
    out = []
    for i in range(30):
        cu = it.next()
        if cu is None:
            break
        out.append(f"{cu.getAddress()}: {cu}")
    print('\n'.join(out))

    # find refs to 0x20000000 (RAM Rcon)
    print("\n=== refs to RAM 0x20000000 ===")
    rm = program.getReferenceManager()
    a = program.getAddressFactory().getDefaultAddressSpace().getAddress(0x20000000)
    for r in rm.getReferencesTo(a):
        print(f"  from {r.getFromAddress()} type={r.getReferenceType()}")
finally:
    project.close()
