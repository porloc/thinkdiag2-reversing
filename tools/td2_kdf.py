#!/usr/bin/env python3
"""Decompile the TD2 OTA key derivation chain + read DAT_004b972c..9750 pointers."""
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
    monitor = ConsoleTaskMonitor()

    def addr(a):
        return af.getAddress(a)

    # make sure the whole area 0x4b8e00-0x4b9800 is disassembled
    for lo in range(0x004B8E00, 0x004B9800, 0x200):
        cmd = DisassembleCommand(addr(lo), None, True)
        cmd.applyTo(program, monitor)

    di = DecompInterface()
    di.openProgram(program)

    def decomp_at(a_int):
        a = addr(a_int)
        func = fm.getFunctionContaining(a)
        if func is None:
            CreateFunctionCmd(a).applyTo(program, monitor)
            func = fm.getFunctionContaining(a)
        if func is None:
            print(f"[!] no func at {a_int:#x}")
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

    # the KDF + helper chain used by FUN_004b9172 (OTA handler)
    for a in [0x004BD378, 0x004BB0EA, 0x004BD058, 0x004BCFD4, 0x004B907E,
              0x004BB4D4, 0x004B834E, 0x004BE5F8, 0x004B8E80, 0x004B902C,
              0x004B911E, 0x004B5D10, 0x004BEE0C, 0x004BE65C,
              0x004BE6D8, 0x004BE7F4, 0x004BED92]:
        decomp_at(a)

    # read the literal pool pointer values at 0x4b9720-0x4b9750
    listing = program.getListing()
    import struct
    fw_path = '/home/z/thinkdiag/downloads/td2_extract/original TD2.bin'
    fw = open(fw_path, 'rb').read()
    print("\nDAT pointers (file offset = flash - 0x00400000):")
    for off in range(0xb9720, 0xb9754, 4):
        v = struct.unpack_from('<I', fw, off)[0]
        target = ''
        if 0x00400000 <= v < 0x00500000:
            fo = v - 0x00400000
            target = f" -> file {fo:#x}: {fw[fo:fo+32].hex()}"
        print(f"  DAT_{off+0x00400000:08X} = {v:#010x}{target}")
    di.dispose()
    project.save(program)
    project.close(program)
finally:
    project.close()
print("DONE")
