#!/usr/bin/env python3
"""Emulate FUN_080230ec (serial key derivation) and compare with Python."""
import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    from ghidra.app.emulator import EmulatorHelper
    from ghidra.util.task import ConsoleTaskMonitor
    from java.math import BigInteger
    from ghidra.program.model.lang import RegisterValue

    mem = program.getMemory()
    def addr(a):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(a)

    ram_addr = addr(0x20000000)
    if mem.getBlock(ram_addr) is None:
        txid = program.startTransaction('add ram')
        try:
            mem.createInitializedBlock('ram', ram_addr, 0x40000, 0, ConsoleTaskMonitor(), False)
        finally:
            program.endTransaction(txid, True)

    SCRATCH = 0x20030000
    RET_MAGIC = 0x08000100

    def run_fn(entry, args, mem_writes, reads):
        emu = EmulatorHelper(program)
        mon = ConsoleTaskMonitor()
        emu.setBreakpoint(addr(RET_MAGIC))
        tmode = program.getLanguage().getRegister('TMode')
        if tmode is not None:
            emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))
        for a, d in mem_writes:
            emu.writeMemory(addr(a), d)
        for i, a in enumerate(args):
            emu.writeRegister('r%d' % i, a)
        emu.writeRegister('sp', 0x20031000)
        emu.writeRegister('lr', RET_MAGIC)
        emu.writeRegister('pc', 0x08000000 + entry)
        ok = emu.run(mon)
        out = {a: bytes(b & 0xFF for b in emu.readMemory(addr(a), n)) for a, n in reads}
        pc = emu.readRegister('pc')
        emu.dispose()
        return ok, out

    # emulate key derivation for serial '989149735933'
    serial = b'989149735933\x00'
    ok, out = run_fn(0x230ec, [SCRATCH, SCRATCH + 0x100],
                     [(SCRATCH, serial)],
                     [(SCRATCH + 0x100, 16), (0x20015278, 48)])
    print(f'run ok={ok}')
    print('fw derived key  =', out[SCRATCH + 0x100].hex())
    print('md5 hex scratch =', out[0x20015278][:32].decode(errors='replace'))

    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt
    import hashlib
    sk = dt.derive_serial_key(b'989149735933')
    print('python key      =', sk.hex())
    print('python md5hex   =', hashlib.md5(b'989149735933').hexdigest())
finally:
    project.close()
