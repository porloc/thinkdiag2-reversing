#!/usr/bin/env python3
"""TD2: seed code from vector table, find AES-table literal pool refs, decompile crypto."""
import os, struct

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.program.flatapi import FlatProgramAPI
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand
from ghidra.program.util import GhidraProgramUtilities
from ghidra.app.script import GhidraScriptUtil

OUT = '/home/z/thinkdiag/analysis/td2'
os.makedirs(OUT, exist_ok=True)
BASE = 0x00400000

fw = open('/home/z/thinkdiag/downloads/td2_extract/original TD2.bin', 'rb').read()

# --- find literal-pool references to key data (raw LE u32 addresses in image) ---
def find_refs(target, span=2048):
    """return (litpool_off, code_guess) for each LE-u32 hit"""
    hits = []
    needle = struct.pack('<I', target)
    off = 0
    while True:
        i = fw.find(needle, off)
        if i < 0: break
        hits.append(i)
        off = i + 1
    return hits

TABLE = 0x004CBDF8
XORT  = 0x004D9FFC
LAUNCH= 0x004DA154
for name, t in [('AES-table', TABLE), ('XOR_TABLE', XORT), ('LAUNCHSTR', LAUNCH)]:
    hs = find_refs(t)
    print(f"{name} literal refs: {[hex(h) for h in hs]}")
    # also any address INSIDE the tables area
    inside = []
    for i in range(0, 0x800, 4):
        inside += [(h, i) for h in find_refs(TABLE + i)]
    print(f"  refs into tables+0..0x800: {len(inside)} hits")

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'TD2', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    monitor = ConsoleTaskMonitor()
    api = FlatProgramAPI(program)

    def addr(a):
        return af.getAddress(a)

    listing = program.getListing()

    # --- seed disassembly from vector table entries ---
    if listing.getInstructionAt(addr(BASE + 1)) is None:
        print("seeding disassembly from vector table...")
        for i in range(0, 200):
            v = struct.unpack_from('<I', fw, i * 4)[0]
            if v & 1 and BASE < v < BASE + len(fw):
                cmd = DisassembleCommand(addr(v), None, True)
                cmd.applyTo(program, monitor)

    # --- disassemble around each literal-pool ref to the AES tables ---
    all_refs = {}
    for i in range(0, 0x800, 4):
        for h in find_refs(TABLE + i):
            all_refs.setdefault(h, i)
    print("literal pool locations:", [hex(h) for h in sorted(all_refs)])

    # the load instruction is typically 0..0x10 before the pool entry; walk back to find code
    func_starts = set()
    for pool_off, tidx in sorted(all_refs.items()):
        # disassemble a window before the literal pool
        for back in (0x40, 0x30, 0x20, 0x10):
            start = pool_off - back
            if start < 0: continue
            # align to 2
            start &= ~1
            cmd = DisassembleCommand(addr(BASE + start), None, True)
            cmd.applyTo(program, monitor)

    # also disassemble around XOR table + LAUNCH refs
    for t in (XORT, LAUNCH):
        for h in find_refs(t):
            for back in (0x40, 0x20, 0x10):
                start = (h - back) & ~1
                cmd = DisassembleCommand(addr(BASE + start), None, True)
                cmd.applyTo(program, monitor)

    # re-run analysis
    print("re-running analysis...")
    GhidraScriptUtil.acquireBundleHostReference()
    try:
        api.analyzeAll(program)
        GhidraProgramUtilities.markProgramAnalyzed(program)
    finally:
        GhidraScriptUtil.releaseBundleHostReference()

    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    di = DecompInterface()
    di.openProgram(program)

    # find functions containing refs to the tables
    found = set()
    a = addr(TABLE)
    while a.offset < TABLE + 0x800:
        for ref in rm.getReferencesTo(a):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f:
                found.add(int(f.getEntryPoint().offset))
        a = a.add(1)
    for t in (XORT, LAUNCH):
        ta = addr(t)
        for ref in rm.getReferencesTo(ta):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f:
                found.add(int(f.getEntryPoint().offset))
    print("crypto-related functions:", [hex(x) for x in sorted(found)])

    def decomp(ep_int):
        a = addr(ep_int)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            return None, None
        ep = int(func.getEntryPoint().offset)
        res = di.decompileFunction(func, 300, monitor)
        if not res.decompileCompleted():
            return ep, None
        return ep, res.getDecompiledFunction().getC()

    for ep in sorted(found):
        e, code = decomp(ep)
        if code:
            with open(f'{OUT}/func_0x{e:X}.c', 'w') as fh:
                fh.write(f"// func @ 0x{e:X}\n" + code)
            print(f"[+] 0x{e:X} ({len(code)} bytes)")
        else:
            print(f"[!] decompile fail 0x{ep:X}")
    di.dispose()
    project.save(program)
    project.close(program)
finally:
    project.close()
print("DONE")
