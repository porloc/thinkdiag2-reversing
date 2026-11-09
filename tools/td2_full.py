#!/usr/bin/env python3
"""TD2 full pipeline: import, seed disassembly (vector table + crypto regions),
analyze, decompile crypto functions, save."""
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

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    # get language from existing program
    p0 = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    lang_id = str(p0.getLanguageID())
    comp_id = str(p0.getCompilerSpec().getCompilerSpecID())
    project.close(p0)
    print("lang:", lang_id, comp_id)

    from java.io import File
    from pyghidra.core import _get_language, _get_compiler_spec
    langObj = _get_language(lang_id)
    compObj = _get_compiler_spec(langObj, comp_id)

    print("importing TD2...")
    f = File('/home/z/thinkdiag/downloads/td2_extract/original TD2.bin')
    program = project.importProgram(f, langObj, compObj)
    program.setImageBase(program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE), True)

    af = program.getAddressFactory().getDefaultAddressSpace()
    monitor = ConsoleTaskMonitor()
    api = FlatProgramAPI(program)
    listing = program.getListing()

    def addr(a):
        return af.getAddress(a)

    def dis(lo, hi):
        lo &= ~1
        cmd = DisassembleCommand(addr(BASE + lo), None, True)
        cmd.applyTo(program, monitor)

    # 1. vector table seeding
    print("seeding vector table...")
    for i in range(0, 250):
        v = struct.unpack_from('<I', fw, i * 4)[0]
        if v & 1 and BASE < v < BASE + len(fw):
            dis(v - BASE, v - BASE + 0x10)

    # 2. crypto regions:
    #    - around AES tables @ 0xBDDF8 (code before/after)
    #    - around keyder literal refs @ 0xB9720/0xB9724
    print("seeding crypto regions...")
    for lo, hi in [(0xBDDF8 - 0x3000, 0xBDDF8 + 0x10),
                   (0xBDDF8 + 0x800, 0xBDDF8 + 0x800 + 0x3000),
                   (0xB9600, 0xB9A00)]:
        dis(lo, hi)

    # 3. run analysis
    print("analyzing...")
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

    # functions referencing tables area
    found = set()
    TABLE = 0x004CBDF8
    a = addr(TABLE)
    n = 0
    while a.offset < TABLE + 0x800:
        for ref in rm.getReferencesTo(a):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f:
                found.add(int(f.getEntryPoint().offset))
        a = a.add(1)
    for t in (0x004D9FFC, 0x004DA154):
        for ref in rm.getReferencesTo(addr(t)):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f:
                found.add(int(f.getEntryPoint().offset))
    print("crypto funcs:", [hex(x) for x in sorted(found)])

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
            print(f"[+] 0x{e:X}")
        else:
            print(f"[!] fail 0x{ep:X}")
    di.dispose()

    project.saveAs(program, '/', 'TD2', True)
    project.close(program)
    print("saved as TD2")
finally:
    project.close()
print("DONE")
