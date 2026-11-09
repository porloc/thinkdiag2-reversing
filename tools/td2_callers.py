#!/usr/bin/env python3
"""Find callers of TD2 ECB decrypt/encrypt (0x4BDDCC/0x4BDDA2) and the serial keyder
(function containing literal refs at 0x4B9720/0x4B9724). Decompile the whole chain."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand

OUT = '/home/z/thinkdiag/analysis/td2'

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'TD2', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    monitor = ConsoleTaskMonitor()

    def addr(a):
        return af.getAddress(a)

    # disassemble area around the keyder literal refs if needed
    for lo in [0x004B9400, 0x004B9600, 0x004B9000]:
        a = addr(lo)
        cmd = DisassembleCommand(a, None, True)
        cmd.applyTo(program, monitor)

    def callers_of(target):
        out = set()
        for ref in rm.getReferencesTo(addr(target)):
            f = fm.getFunctionContaining(ref.getFromAddress())
            if f:
                out.add(int(f.getEntryPoint().offset))
            else:
                out.add(-int(ref.getFromAddress().offset))  # negative = raw address, no func
        return out

    for t in (0x004BDDCC, 0x004BDDA2):
        print(f"callers of {t:#x}:", [hex(x) for x in sorted(callers_of(t))])

    # function containing 0x4B9720 (keyder)
    for probe in (0x004B9720, 0x004B9724):
        f = fm.getFunctionContaining(addr(probe))
        print(f"func containing {probe:#x}:", hex(int(f.getEntryPoint().offset)) if f else None)

    # decompile the keyder + callers (level 1 and 2)
    di = DecompInterface()
    di.openProgram(program)

    def decomp_at(a_int):
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
        print(f"[+] 0x{ep:X}")
        return ep

    # keyder region functions
    kd = None
    for probe in (0x004B9720,):
        f = fm.getFunctionContaining(addr(probe))
        if f:
            kd = int(f.getEntryPoint().offset)
    todo = []
    if kd:
        todo.append(kd)
    for t in (0x004BDDCC, 0x004BDDA2):
        for c in callers_of(t):
            if c > 0:
                todo.append(c)
            else:
                # no function; create one at that address (call site); decompile containing after disasm
                todo.append(-c)
    for a in todo:
        decomp_at(a)
    di.dispose()
    project.save(program)
    project.close(program)
finally:
    project.close()
print("DONE")
