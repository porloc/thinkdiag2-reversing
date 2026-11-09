#!/usr/bin/env python3
"""Find ALL callers of AES ECB drivers + DOWNLOAD.BIN string refs."""
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

    rm = program.getReferenceManager()

    # All refs to decrypt driver 0x283fc and encrypt driver 0x283c4, and to 0x28108 (key expansion)
    print("=== refs TO decrypt driver FUN_080283fc ===")
    dec_callers = set()
    for r in rm.getReferencesTo(addr(0x283fc)):
        frm = r.getFromAddress()
        cf = fm.getFunctionContaining(frm)
        name = cf.getName() if cf else '?'
        dec_callers.add((str(frm), name))
        print(f"  from {frm} ({name})")

    print("\n=== refs TO encrypt driver FUN_080283c4 ===")
    for r in rm.getReferencesTo(addr(0x283c4)):
        frm = r.getFromAddress()
        cf = fm.getFunctionContaining(frm)
        print(f"  from {frm} ({cf.getName() if cf else '?'})")

    # Find DOWNLOAD.BIN string and refs to it
    print("\n=== searching for DOWNLOAD strings ===")
    listing = program.getListing()
    it = listing.getDefinedData(True)
    targets = []
    while it.hasNext():
        d = it.next()
        try:
            v = str(d.getValue())
            if 'DOWNLOAD' in v.upper() or '.BIN' in v.upper():
                print(f"  {d.getAddress()}: {v!r}")
                targets.append(d.getAddress())
        except Exception:
            pass

    for t in targets:
        print(f"\n=== refs to string @ {t} ===")
        for r in rm.getReferencesTo(t):
            frm = r.getFromAddress()
            cf = fm.getFunctionContaining(frm)
            print(f"  from {frm} ({cf.getName() if cf else '?'})")

    # decompile all decrypt driver callers
    di = DecompInterface()
    di.openProgram(program)
    seen = set()
    for ep, name in dec_callers:
        if name in seen or not name.startswith('FUN_'):
            continue
        seen.add(name)
        try:
            f = fm.getFunction(addr(int(ep, 16)))
        except Exception:
            continue
        if f is None:
            continue
        res = di.decompileFunction(f, 120, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            with open(f'{OUT}/deccaller_{ep}.c', 'w') as fo:
                fo.write(code)
            print(f"[+] decompiled decrypt caller {ep} ({name})")
    di.dispose()
finally:
    project.close()
print("DONE")
