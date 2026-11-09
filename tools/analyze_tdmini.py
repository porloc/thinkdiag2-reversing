#!/usr/bin/env python3
"""Deep analysis of ThinkDiag Mini firmware: crypto functions, tables, xrefs.

Addresses from prior analysis (file offset = flash offset, base 0x08000000):
  Custom AES funcs:  0x27A90, 0x27B3A, 0x27EA2, 0x28244, 0x28308
  Key derivation:    0x230EC, 0x2308C, 0x23290 (dead code)
  AES tables:        0x3B2AC - 0x3BAAC
  XOR table:         0x3C10C
  Fill value:        0x3C298 ("LAUNCHPRIVELIBJM")
  DOWNLOAD.BIN str:  0xEAEC
  Reset vector:      0x0800eb3c
"""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.address import AddressSet

OUT = '/home/z/thinkdiag/analysis/tdmini'
os.makedirs(OUT, exist_ok=True)

BASE = 0x08000000

CRYPTO_FUNCS = [0x27A90, 0x27B3A, 0x27EA2, 0x28244, 0x28308]
KEYDER_FUNCS = [0x230EC, 0x2308C, 0x23290]
TABLES = {
    'aes_tables': (0x3B2AC, 0x3BAAC),
    'xor_table': (0x3C10C, 0x3C20C),
    'fill_area': (0x3C298, 0x3C2C0),
}

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    print("Opened:", program.getName(), "base:", program.getImageBase())
    fm = program.getFunctionManager()
    listing = program.getListing()
    af = program.getAddressFactory().getDefaultAddressSpace().getAddressFactory() if False else program.getAddressFactory()
    monitor = ConsoleTaskMonitor()

    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE + off)

    # ---- decompiler setup ----
    di = DecompInterface()
    di.openProgram(program)
    results = {}

    def decompile_at(off, tag):
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            # try to create function
            from ghidra.app.cmd.function import CreateFunctionCmd
            cmd = CreateFunctionCmd(a)
            cmd.applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            print(f"[!] no function at 0x{off:X}")
            return
        res = di.decompileFunction(func, 120, monitor)
        if res.decompileCompleted():
            code = res.getDecompiledFunction().getC()
            results[tag] = (str(func.getEntryPoint()), func.getName(), code)
            with open(f'{OUT}/{tag}_0x{off:X}.c', 'w') as f:
                f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
            print(f"[+] decompiled {tag} @ {func.getEntryPoint()} ({func.getName()})")
        else:
            print(f"[!] decompile failed at 0x{off:X}: {res.getErrorMessage()}")

    for off in CRYPTO_FUNCS:
        decompile_at(off, 'crypto')
    for off in KEYDER_FUNCS:
        decompile_at(off, 'keyder')

    # ---- dump tables as raw bytes ----
    for name, (start, end) in TABLES.items():
        a = addr(start)
        size = end - start
        mem = program.getMemory()
        data = bytearray()
        ok = True
        try:
            block = mem.getBlock(a)
            b = bytearray(size)
            mem.getBytes(a, b)
            data = b
        except Exception as e:
            print(f"[!] table read fail {name}: {e}")
            ok = False
        if ok:
            with open(f'{OUT}/{name}_0x{start:X}.bin', 'wb') as f:
                f.write(bytes(data))
            with open(f'{OUT}/{name}_0x{start:X}.hex', 'w') as f:
                for i in range(0, len(data), 16):
                    f.write(f"{start+i:08X}: {bytes(data[i:i+16]).hex()}\n")
            print(f"[+] dumped {name} 0x{start:X}-0x{end:X} ({size} bytes)")

    # ---- xrefs to crypto funcs ----
    rm = program.getReferenceManager()
    with open(f'{OUT}/xrefs.txt', 'w') as f:
        for off in CRYPTO_FUNCS + KEYDER_FUNCS:
            a = addr(off)
            refs = rm.getReferencesTo(a)
            f.write(f"\n=== refs TO 0x{BASE+off:X} ===\n")
            func = fm.getFunctionContaining(a)
            fname = func.getName() if func else '?'
            f.write(f"(function: {fname})\n")
            for r in refs:
                frm = r.getFromAddress()
                cfunc = fm.getFunctionContaining(frm)
                f.write(f"  from {frm} ({cfunc.getName() if cfunc else '?'}) type={r.getReferenceType()}\n")

    # ---- find callers of crypto funcs and decompile them ----
    caller_set = set()
    for off in CRYPTO_FUNCS + KEYDER_FUNCS:
        a = addr(off)
        for r in rm.getReferencesTo(a):
            frm = r.getFromAddress()
            cfunc = fm.getFunctionContaining(frm)
            if cfunc:
                caller_set.add(str(cfunc.getEntryPoint()))
    print("callers:", caller_set)
    for i, ep in enumerate(sorted(caller_set)):
        off = int(ep, 16) - BASE
        decompile_at(off, f'caller_{i:02d}')

    # ---- DOWNLOAD.BIN string refs ----
    from ghidra.program.model.data import StringDataInstance
    di_sp = program.getDataTypeManager()
    # search defined strings
    with open(f'{OUT}/strings_download.txt', 'w') as f:
        it = listing.getDefinedData(True)
        while it.hasNext():
            d = it.next()
            try:
                v = d.getValue()
                s = str(v)
                if 'DOWNLOAD' in s.upper() or 'LAUNCH' in s.upper() or '.BIN' in s.upper() or 'INI' in s.upper():
                    f.write(f"{d.getAddress()}: {s!r} ({d.getDataType()})\n")
            except Exception:
                pass

    di.dispose()
    project.saveAs(program, "/", "tdmini_analyzed", monitor) if False else None
finally:
    project.close()
print("DONE")
