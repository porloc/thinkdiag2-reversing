#!/usr/bin/env python3
"""Import DB7.bin, seed disassembly (vector table + boot update area + crypto area),
analyze, decompile the DOWNLOAD.BIN handler and crypto."""
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

OUT = '/home/z/thinkdiag/analysis/db7'
os.makedirs(OUT, exist_ok=True)
BASE = 0x00400000
fw = open('/home/z/thinkdiag/downloads/td2_extract/original DB7.bin', 'rb').read()

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    p0 = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    lang_id = str(p0.getLanguageID())
    comp_id = str(p0.getCompilerSpec().getCompilerSpecID())
    project.close(p0)

    from java.io import File
    from pyghidra.core import _get_language, _get_compiler_spec
    langObj = _get_language(lang_id)
    compObj = _get_compiler_spec(langObj, comp_id)

    print("importing DB7...")
    f = File('/home/z/thinkdiag/downloads/td2_extract/original DB7.bin')
    program = project.importProgram(f, langObj, compObj)
    program.setImageBase(program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE), True)

    af = program.getAddressFactory().getDefaultAddressSpace()
    monitor = ConsoleTaskMonitor()
    api = FlatProgramAPI(program)

    def addr(a):
        return af.getAddress(a)

    def dis(lo):
        cmd = DisassembleCommand(addr(BASE + (lo & ~1)), None, True)
        cmd.applyTo(program, monitor)

    # vector table
    for i in range(0, 250):
        v = struct.unpack_from('<I', fw, i * 4)[0]
        if v & 1 and BASE < v < BASE + len(fw):
            dis(v - BASE)
    # boot update handler area (around literal ref 0x8f8c)
    for lo in [0x8c00, 0x8e00, 0x9000, 0x9200, 0x9400, 0x9600, 0x9800, 0x9a00, 0x9c00, 0x9e00, 0xa000, 0xa200, 0xa400, 0xa600, 0xa800, 0xaa00, 0xac00, 0xae00, 0xb000, 0xb200, 0xb400]:
        dis(lo)
    # crypto area around tables 0xcb6bc
    for lo in range(0xc8000, 0xcc800, 0x200):
        dis(lo)

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

    # who references the DOWNLOAD.BIN string @ 0x004001b8?
    dl_users = set()
    for ref in rm.getReferencesTo(addr(0x004001B8)):
        fn = fm.getFunctionContaining(ref.getFromAddress())
        print(f"DOWNLOAD.BIN ref from {ref.getFromAddress().offset:#x} (func {hex(int(fn.getEntryPoint().offset)) if fn else None})")
        if fn:
            dl_users.add(int(fn.getEntryPoint().offset))
    print("DOWNLOAD handler functions:", [hex(x) for x in sorted(dl_users)])

    def decomp(a_int):
        a = addr(a_int)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            return None
        ep = int(func.getEntryPoint().offset)
        res = di.decompileFunction(func, 300, monitor)
        if not res.decompileCompleted():
            print(f"[!] fail {ep:#x}")
            return ep
        code = res.getDecompiledFunction().getC()
        with open(f'{OUT}/func_0x{ep:X}.c', 'w') as fh:
            fh.write(f"// func @ 0x{ep:X}\n" + code)
        print(f"[+] 0x{ep:X} ({len(code)} chars)")
        return ep

    # decompile download handler + callers
    done = set()
    for ep in sorted(dl_users):
        if ep not in done:
            decomp(ep)
            done.add(ep)
    # also decompile the functions around the AES tables (they will be found via analysis)
    crypto = set()
    TABLE = 0x004CB6BC
    a = addr(TABLE)
    while a.offset < TABLE + 0x800:
        for ref in rm.getReferencesTo(a):
            fn = fm.getFunctionContaining(ref.getFromAddress())
            if fn:
                crypto.add(int(fn.getEntryPoint().offset))
        a = a.add(1)
    print("crypto funcs (refs to tables):", [hex(x) for x in sorted(crypto)])
    for ep in sorted(crypto):
        if ep not in done:
            decomp(ep)
            done.add(ep)
    di.dispose()
    project.saveAs(program, '/', 'DB7', True)
    project.close(program)
finally:
    project.close()
print("DONE")
