#!/usr/bin/env python3
"""Import TD2.bin at 0x00400000 into the thinkdiag Ghidra project, analyze it,
then locate crypto functions by their references to:
  - AES tables @ 0x004CBDF8 (file offset 0xBDDF8)
  - XOR_TABLE @ 0x004D9FFC, LAUNCHPRIVELIBJM @ 0x004DA154
  - DOWNLOAD string @ 0x004E1E0
and decompile them."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.program.flatapi import FlatProgramAPI
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.address import AddressSet
from ghidra.program.util import GhidraProgramUtilities
from ghidra.app.script import GhidraScriptUtil

OUT = '/home/z/thinkdiag/analysis/td2'
os.makedirs(OUT, exist_ok=True)
BASE = 0x00400000

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    # language from existing import
    p0 = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    lang = p0.getLanguageID()
    comp = p0.getCompilerSpec().getCompilerSpecID()
    print("language:", lang, "compiler:", comp)
    project.close(p0)

    name = 'TD2'
    prog = None
    try:
        prog = project.openProgram('/', name, False)
        print("TD2 already in project")
    except Exception:
        pass
    if prog is None:
        print("importing TD2.bin ...")
        from java.io import File
        from pyghidra.core import _get_language, _get_compiler_spec
        f = File('/home/z/thinkdiag/downloads/td2_extract/original TD2.bin')
        langObj = _get_language(str(lang))
        compObj = _get_compiler_spec(langObj, str(comp))
        prog = project.importProgram(f, langObj, compObj)
        prog.setImageBase(prog.getAddressFactory().getDefaultAddressSpace().getAddress(BASE), True)
        print("imported, base:", prog.getImageBase())

    # analyze if needed
    if GhidraProgramUtilities.shouldAskToAnalyze(prog):
        print("analyzing TD2 (this takes a while)...")
        GhidraScriptUtil.acquireBundleHostReference()
        try:
            api = FlatProgramAPI(prog)
            api.analyzeAll(prog)
            GhidraProgramUtilities.markProgramAnalyzed(prog)
        finally:
            GhidraScriptUtil.releaseBundleHostReference()
    print("analysis done")

    program = prog
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    af = program.getAddressFactory().getDefaultAddressSpace()
    monitor = ConsoleTaskMonitor()

    def addr(a):
        return af.getAddress(a)

    di = DecompInterface()
    di.openProgram(program)

    def decomp(a):
        func = fm.getFunctionContaining(a)
        if func is None:
            from ghidra.app.cmd.function import CreateFunctionCmd
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            return None, None
        ep = int(func.getEntryPoint().offset)
        res = di.decompileFunction(func, 300, monitor)
        if not res.decompileCompleted():
            return ep, None
        return ep, res.getDecompiledFunction().getC()

    # 1. find refs into the AES table area [0x004CBDF8, 0x004CC5F8)
    TABLE_LO, TABLE_HI = 0x004CBDF8, 0x004CC5F8
    found = set()
    a = addr(TABLE_LO)
    while a.offset < TABLE_HI:
        for ref in rm.getReferencesTo(a):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f:
                found.add(int(f.getEntryPoint().offset))
        a = a.add(1)
    print("functions referencing AES tables:", [hex(x) for x in sorted(found)])

    # 2. refs to XOR_TABLE and LAUNCH string and DOWNLOAD string
    for target, label in [(0x004D9FFC, 'XOR_TABLE'), (0x004DA154, 'LAUNCHSTR'), (0x004E1E0, 'DOWNLOADSTR')]:
        t = addr(target)
        users = set()
        for ref in rm.getReferencesTo(t):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f:
                users.add(int(f.getEntryPoint().offset))
        print(f"refs to {label} @ {target:#x}:", [hex(x) for x in sorted(users)])
        found.update(users)

    # decompile all found functions
    for ep in sorted(found):
        e, code = decomp(addr(ep))
        if code:
            with open(f'{OUT}/func_0x{e:X}.c', 'w') as fh:
                fh.write(f"// func @ 0x{e:X}\n" + code)
            print(f"[+] decompiled 0x{e:X} ({len(code)} chars)")
        else:
            print(f"[!] fail 0x{ep:X}")
    di.dispose()
    project.save(program)
finally:
    project.close()
print("DONE")
