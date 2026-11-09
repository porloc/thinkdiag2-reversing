#!/usr/bin/env python3
"""Emulate crypto functions — context set once, full test suite."""
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

    mem = program.getMemory()

    def addr(a):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(a)

    ram_addr = addr(0x20000000)
    if mem.getBlock(ram_addr) is None:
        txid = program.startTransaction('add ram')
        try:
            blk = mem.createInitializedBlock('ram', ram_addr, 0x40000, 0, ConsoleTaskMonitor(), False)
            print('created RAM block')
        finally:
            program.endTransaction(txid, True)

    emu = EmulatorHelper(program)
    mon = ConsoleTaskMonitor()

    SCRATCH = 0x20030000
    RET_MAGIC = 0x08000100
    emu.setBreakpoint(addr(RET_MAGIC))

    # set Thumb context ONCE
    from java.math import BigInteger
    from ghidra.program.model.lang import RegisterValue
    tmode = program.getLanguage().getRegister('TMode')
    if tmode is not None:
        emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))

    def write_mem(a, data):
        emu.writeMemory(addr(a), data)

    def read_mem(a, n):
        return bytes(b & 0xFF for b in emu.readMemory(addr(a), n))

    def emulate(entry, args):
        for i, a in enumerate(args):
            emu.writeRegister('r%d' % i, a)
        emu.writeRegister('sp', 0x20031000)
        emu.writeRegister('lr', RET_MAGIC)
        emu.writeRegister('pc', 0x08000000 + entry)
        ok = emu.run(mon)
        return ok

    # ---- key expansion with default key ----
    master = bytes(range(16))
    write_mem(SCRATCH, master)
    emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
    keys48 = read_mem(SCRATCH + 0x100, 48)
    print('fw keys (RAM zero => Rcon=0):')
    for i in range(0, 48, 16):
        print('  K%d: %s' % (i // 16, keys48[i:i+16].hex()))

    # ---- write specific Rcon into RAM 0x20000000 and re-expand ----
    for rcon_name, rcon in [('std', bytes([0, 1, 2, 4, 8, 10, 0x20, 0x40, 0x80, 0x1b, 0x36])),
                             ('zeros', bytes(16))]:
        write_mem(0x20000000, rcon)
        write_mem(SCRATCH, master)
        emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
        k = read_mem(SCRATCH + 0x100, 48)
        print(f'fw keys (Rcon={rcon_name}): K1={k[16:32].hex()} K2={k[32:48].hex()}')

    # ---- E(0) and E(test block) with Rcon=zeros (bss) ----
    write_mem(0x20000000, bytes(16))
    write_mem(SCRATCH, master)
    emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
    keys48 = read_mem(SCRATCH + 0x100, 48)

    block = bytes(range(0x41, 0x51))
    write_mem(SCRATCH + 0x200, block)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    print('fw E(block) [Rcon=0] =', read_mem(SCRATCH + 0x300, 16).hex())

    write_mem(SCRATCH + 0x200, b'\x00' * 16)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    e0 = read_mem(SCRATCH + 0x300, 16)
    print('fw E(0) [Rcon=0]     =', e0.hex())

    write_mem(SCRATCH + 0x200, b'\x00' * 16)
    emulate(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    print('fw D(0) [Rcon=0]     =', read_mem(SCRATCH + 0x300, 16).hex())

    # roundtrip check
    write_mem(SCRATCH + 0x200, e0)
    emulate(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    print('fw D(E(0))           =', read_mem(SCRATCH + 0x300, 16).hex(), '(expect zeros)')

    write_mem(SCRATCH + 0x200, block)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    ct = read_mem(SCRATCH + 0x300, 16)
    write_mem(SCRATCH + 0x200, ct)
    emulate(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    print('fw D(E(x))           =', read_mem(SCRATCH + 0x300, 16).hex(), '(expect', block.hex(), ')')

    # ---- also test with DEFAULT serial key ----
    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt
    sk = dt.derive_serial_key(b'989149735933')
    write_mem(0x20000000, bytes(16))  # Rcon=0
    write_mem(SCRATCH, sk)
    emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
    write_mem(SCRATCH + 0x200, b'\x00' * 16)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    print('fw E(0) [serial key, Rcon=0] =', read_mem(SCRATCH + 0x300, 16).hex())
finally:
    project.close()
