#!/usr/bin/env python3
"""Find all references to DB7 ECB functions and decompile the callers."""
import os, sys
sys.setrecursionlimit(10000)

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand

OUT = '/home/z/thinkdiag/analysis/db7'

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'DB7', False)
    af = program.getAddressFactory().getDefaultAddressSpace()
    fm = program.getFunctionManager()
    rm = program.getReferenceManager()
    monitor = ConsoleTaskMonitor()

    def addr(a):
        return af.getAddress(a)

    all_users = {}
    for target in (0x004CB690, 0x004CB666, 0x004CB436):
        t = addr(target)
        for ref in rm.getReferencesTo(t):
            fa = int(ref.getFromAddress().offset)
            fn = fm.getFunctionContaining(ref.getFromAddress())
            all_users[fa] = int(fn.getEntryPoint().offset) if fn else None
    print("refs to ECB funcs:")
    for fa, fe in sorted(all_users.items()):
        print(f"  from {fa:#x} in func {hex(fe) if fe else 'NONE'}")

    di = DecompInterface()
    di.openProgram(program)

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

    # decompile callers (excluding the crypto region itself)
    for fa, fe in sorted(all_users.items()):
        if fe is None or not (0x4CB400 <= fe < 0x4CB800):
            target_a = fe if fe else fa
            decomp(target_a)
    # also decompile raw-address refs' containing regions
    for fa, fe in sorted(all_users.items()):
        if fe is None:
            print(f"raw ref at {fa:#x} — disassembling around")
            cmd = DisassembleCommand(addr(fa & ~1), None, True)
            cmd.applyTo(program, monitor)
            fn = fm.getFunctionContaining(addr(fa))
            if fn:
                decomp(int(fn.getEntryPoint().offset))
    di.dispose()
    project.save(program)
    project.close(program)
finally:
    project.close()
print("DONE")
