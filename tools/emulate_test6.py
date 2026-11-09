#!/usr/bin/env python3
"""Emulate crypto — self-contained: fresh helper, emu memory per call."""
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

    def run_once(entry, args, mem_writes):
        """Fresh helper; mem_writes = list of (address, bytes)."""
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
        results = {}
        emu.dispose()
        return ok

    def run_and_read(entry, args, mem_writes, reads):
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
        out = {}
        for a, n in reads:
            out[a] = bytes(b & 0xFF for b in emu.readMemory(addr(a), n))
        emu.dispose()
        return out

    master = bytes(range(16))
    RCON_STD = bytes([0, 1, 2, 4, 8, 0x10, 0x20, 0x40, 0x80, 0x1b, 0x36])
    RCON_ZEROS = bytes(16)

    for rcon_name, rcon in [('std', RCON_STD), ('zeros', RCON_ZEROS)]:
        # key expansion
        r = run_and_read(0x28108, [SCRATCH, SCRATCH + 0x100],
                         [(0x20000000, rcon), (SCRATCH, master)],
                         [(SCRATCH + 0x100, 48)])
        keys = r[SCRATCH + 0x100]
        print(f'keys [Rcon={rcon_name}]:')
        for i in range(0, 48, 16):
            print('  K%d: %s' % (i // 16, keys[i:i+16].hex()))
        # E(0)
        r = run_and_read(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0],
                         [(0x20000000, rcon), (SCRATCH, master),
                          (SCRATCH + 0x100, keys), (SCRATCH + 0x200, b'\x00' * 16)],
                         [(SCRATCH + 0x300, 16)])
        e0 = r[SCRATCH + 0x300]
        print(f'fw E(0) [Rcon={rcon_name}] = {e0.hex()}')
        # D(0)
        r = run_and_read(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0],
                         [(0x20000000, rcon), (SCRATCH, master),
                          (SCRATCH + 0x100, keys), (SCRATCH + 0x200, b'\x00' * 16)],
                         [(SCRATCH + 0x300, 16)])
        print(f'fw D(0) [Rcon={rcon_name}] = {r[SCRATCH + 0x300].hex()}')
        # roundtrip
        r = run_and_read(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0],
                         [(0x20000000, rcon), (SCRATCH, master),
                          (SCRATCH + 0x100, keys), (SCRATCH + 0x200, e0)],
                         [(SCRATCH + 0x300, 16)])
        print(f'fw D(E(0))             = {r[SCRATCH + 0x300].hex()} (expect 0s)')

    # python comparison
    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt
    rk = dt.expand_key(master)
    print('python E(0) [std]     =', dt.encrypt_block(b'\x00'*16, rk).hex())
    print('python D(0) [std]     =', dt.decrypt_block(b'\x00'*16, rk).hex())
finally:
    project.close()
