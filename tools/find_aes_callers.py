#!/usr/bin/env python3
"""Find all callers of the app AES ECB functions (0x283fc, 0x283c4) and
decompile them; also decompile FUN_08009d22 (SE signature verify)."""
import os, re

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.program.model.symbol import RefType

OUT = '/home/z/thinkdiag/analysis/tdmini'
BASE = 0x08000000

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    af = program.getAddressFactory().getDefaultAddressSpace()
    monitor = ConsoleTaskMonitor()

    def addr(off):
        return af.getAddress(BASE + off)

    # find refs to ECB decrypt/encrypt
    for target in (0x283fc, 0x283c4, 0x28108):
        t = addr(target)
        refs = rm.getReferencesTo(t)
        callers = set()
        for r in refs:
            f = fm.getFunctionContaining(r.getFromAddress())
            if f:
                callers.add(int(f.getEntryPoint().offset) - BASE)
        print(f"callers of 0x{target:X}: {[hex(c) for c in sorted(callers)]}")

    di = DecompInterface()
    di.openProgram(program)

    def decomp(off):
        a = addr(off)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            return None
        ep = int(func.getEntryPoint().offset) - BASE
        res = di.decompileFunction(func, 300, monitor)
        if not res.decompileCompleted():
            return None
        code = res.getDecompiledFunction().getC()
        with open(f'{OUT}/func_0x{ep:X}.c', 'w') as f:
            f.write(f"// {func.getName()} @ {func.getEntryPoint()}\n" + code)
        return code

    # decompile callers + the SE verify function
    todo = set([0x9d22])
    for target in (0x283fc, 0x283c4):
        t = addr(target)
        for r in rm.getReferencesTo(t):
            f = fm.getFunctionContaining(r.getFromAddress())
            if f:
                todo.add(int(f.getEntryPoint().offset) - BASE)
    # also callers of callers (one level up)
    for c in list(todo):
        code = decomp(c)
        if code:
            print(f"[+] decompiled 0x{c:X}")
    # one more level: find callers of the decompiled caller functions
    level2 = set()
    for c in todo:
        if c == 0x9d22:
            continue
        try:
            code = open(f'{OUT}/func_0x{c:X}.c').read()
        except FileNotFoundError:
            continue
        for m in re.findall(r'FUN_([0-9a-f]{8})', code):
            pass
    # find who calls the callers
    for c in todo:
        if c == 0x9d22: continue
        t = addr(c)
        for r in rm.getReferencesTo(t):
            f = fm.getFunctionContaining(r.getFromAddress())
            if f:
                level2.add(int(f.getEntryPoint().offset) - BASE)
    print(f"level-2 callers: {[hex(x) for x in sorted(level2)]}")
    for c in sorted(level2):
        code = decomp(c)
        if code:
            print(f"[+] level2 decompiled 0x{c:X}")
    di.dispose()
finally:
    project.close()
print("DONE")
