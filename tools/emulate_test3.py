#!/usr/bin/env python3
"""Emulate firmware crypto functions — with proper RAM block."""
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
    from ghidra.program.model.mem import MemoryBlock

    BASE = 0x08000000
    mem = program.getMemory()

    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(off)

    # create RAM block 0x20000000..0x20040000 if missing
    ram_addr = addr(0x20000000)
    if mem.getBlock(ram_addr) is None:
        txid = program.startTransaction('add ram')
        try:
            blk = mem.createInitializedBlock('ram', ram_addr, 0x40000, 0,
                                             monitor := ConsoleTaskMonitor(), False)
            print('created RAM block:', blk.getName(), blk.getStart(), '-', blk.getEnd())
        finally:
            program.endTransaction(txid, True)
    else:
        print('RAM block exists:', mem.getBlock(ram_addr).getName())

    emu = EmulatorHelper(program)
    mon = ConsoleTaskMonitor()

    SCRATCH = 0x20030000
    RET_MAGIC = 0x08000100
    emu.setBreakpoint(addr(RET_MAGIC))

    def write_mem(a, data):
        emu.writeMemory(addr(a), data)

    def read_mem(a, n):
        return bytes(b & 0xFF for b in emu.readMemory(addr(a), n))

    def emulate(entry, args):
        for i, a in enumerate(args):
            emu.writeRegister('r%d' % i, a)
        emu.writeRegister('sp', 0x20031000)
        emu.writeRegister('lr', RET_MAGIC)
        from java.math import BigInteger
        from ghidra.program.model.lang import RegisterValue
        tmode = program.getLanguage().getRegister('TMode')
        if tmode is not None:
            emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))
        emu.writeRegister('pc', BASE + entry)
        ok = emu.run(mon)
        pcval = emu.readRegister('pc')
        print(f'  [run entry=0x{entry:X} ok={ok} pc={pcval}]')
        return ok

    master = bytes(range(16))
    write_mem(SCRATCH, master)
    emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
    keys48 = read_mem(SCRATCH + 0x100, 48)
    print('firmware expanded keys:')
    for i in range(0, 48, 16):
        print('  K%d: %s' % (i // 16, keys48[i:i+16].hex()))

    block = bytes(range(0x41, 0x51))
    write_mem(SCRATCH + 0x200, block)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    ct = read_mem(SCRATCH + 0x300, 16)
    print('firmware E(block) =', ct.hex())

    write_mem(SCRATCH + 0x200, b'\x00' * 16)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    e0 = read_mem(SCRATCH + 0x300, 16)
    print('firmware E(0)     =', e0.hex())

    write_mem(SCRATCH + 0x200, b'\x00' * 16)
    emulate(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    print('firmware D(0)     =', read_mem(SCRATCH + 0x300, 16).hex())

    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt
    rk = dt.expand_key(master)
    print('python expanded   :', rk.hex())
    print('python E(block)   =', dt.encrypt_block(block, rk).hex())
    print('python E(0)       =', dt.encrypt_block(b'\x00'*16, rk).hex())
    print('python D(0)       =', dt.decrypt_block(b'\x00'*16, rk).hex())
finally:
    project.close()
