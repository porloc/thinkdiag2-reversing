#!/usr/bin/env python3
"""Emulate crypto — fresh EmulatorHelper per call, memory persists in program."""
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
            print('created RAM block')
        finally:
            program.endTransaction(txid, True)

    SCRATCH = 0x20030000
    RET_MAGIC = 0x08000100

    def write_mem(a, data):
        # write to program memory directly (persists for later reads)
        txid = program.startTransaction('write')
        try:
            mem = program.getMemory()
            for i, b in enumerate(data):
                v = b & 0xFF
                if v > 127: v -= 256
                mem.setByte(addr(a + i), v)
        finally:
            program.endTransaction(txid, True)

    def read_mem(a, n):
        out = bytearray(n)
        m = program.getMemory()
        for i in range(n):
            out[i] = m.getByte(addr(a + i)) & 0xFF
        return bytes(out)

    def emulate(entry, args):
        emu = EmulatorHelper(program)
        mon = ConsoleTaskMonitor()
        emu.setBreakpoint(addr(RET_MAGIC))
        tmode = program.getLanguage().getRegister('TMode')
        if tmode is not None:
            emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))
        for i, a in enumerate(args):
            emu.writeRegister('r%d' % i, a)
        emu.writeRegister('sp', 0x20031000)
        emu.writeRegister('lr', RET_MAGIC)
        ok = emu.run(addr(0x08000000 + entry), None, mon) if False else None
        # use simple run from PC
        emu.writeRegister('pc', 0x08000000 + entry)
        ok = emu.run(mon)
        emu.dispose()
        return ok

    master = bytes(range(16))

    for rcon_name, rcon in [('std', bytes([0, 1, 2, 4, 8, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36])),
                             ('zeros', bytes(16))]:
        write_mem(0x20000000, rcon)
        write_mem(SCRATCH, master)
        emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
        k = read_mem(SCRATCH + 0x100, 48)
        print(f'fw keys (Rcon={rcon_name}):')
        for i in range(0, 48, 16):
            print('  K%d: %s' % (i // 16, k[i:i+16].hex()))

    # E(0) with default key, both Rcon variants
    for rcon_name, rcon in [('std', bytes([0, 1, 2, 4, 8, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36])),
                             ('zeros', bytes(16))]:
        write_mem(0x20000000, rcon)
        write_mem(SCRATCH, master)
        emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
        write_mem(SCRATCH + 0x200, b'\x00' * 16)
        emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
        e0 = read_mem(SCRATCH + 0x300, 16)
        print(f'fw E(0) [Rcon={rcon_name}] = {e0.hex()}')
        write_mem(SCRATCH + 0x200, e0)
        emulate(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
        print(f'fw D(E(0))              = {read_mem(SCRATCH + 0x300, 16).hex()} (expect zeros)')
        # D(0)
        write_mem(SCRATCH + 0x200, b'\x00' * 16)
        emulate(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
        print(f'fw D(0) [Rcon={rcon_name}] = {read_mem(SCRATCH + 0x300, 16).hex()}')

    # serial key
    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt
    for serial in [b'989149735933']:
        for rcon_name, rcon in [('std', bytes([0, 1, 2, 4, 8, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36])),
                                 ('zeros', bytes(16))]:
            sk = dt.derive_serial_key(serial)
            write_mem(0x20000000, rcon)
            write_mem(SCRATCH, sk)
            emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
            write_mem(SCRATCH + 0x200, b'\x00' * 16)
            emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
            print(f'fw E(0) [serial={serial.decode()}, Rcon={rcon_name}] = {read_mem(SCRATCH + 0x300, 16).hex()}')
finally:
    project.close()
