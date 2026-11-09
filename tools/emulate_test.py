#!/usr/bin/env python3
"""Emulate FUN_08028244 (encrypt) and FUN_08028308 (decrypt) in Ghidra
to validate the Python reimplementation."""
import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.program.model.address import AddressSet

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    program = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    from ghidra.app.emulator import EmulatorHelper

    BASE = 0x08000000
    emu = EmulatorHelper(program)
    monitor = None

    def addr(off):
        return program.getAddressFactory().getDefaultAddressSpace().getAddress(BASE + off)

    # scratch RAM for emulation
    SCRATCH = 0x20030000   # well past used RAM (0x200122d0 SP, buffers up to ~0x200154xx)

    def write_mem(a, data):
        emu.writeMemory(addr(a), data)

    def read_mem(a, n):
        ba = bytearray(n)
        for i in range(n):
            ba[i] = emu.readMemory(addr(a + i)) & 0xFF
        return bytes(ba)

    def run_func(entry, args, max_steps=2000000):
        """Run ARM Thumb function; args = list of u32 for r0-r3."""
        for i, a in enumerate(args):
            emu.writeRegister('r%d' % i, a)
        emu.writeRegister('lr', 0x08000100)  # magic return addr
        emu.writeRegister('sp', 0x20031000)
        # set thumb bit in some cpsr? EmulatorHelper handles via Tmode register
        try:
            emu.writeRegister('cpsr', emu.readRegister('cpsr') | 0x20)
        except Exception:
            pass
        emu.setBreakpoint(addr(0x100 - BASE + BASE))  # hmm
        emu.writePC(addr(entry))
        from ghidra.util.task import ConsoleTaskMonitor
        emu.run(ConsoleTaskMonitor()) if hasattr(emu, 'run') else None
        return

    # simpler: use executeWithEmulator? EmulatorHelper has: run(start, breakpoint)
    # Actually EmulatorHelper.run(startAddress, breakAddress)
    def emulate(entry, args):
        for i, a in enumerate(args):
            emu.writeRegister('r%d' % i, a)
        emu.writeRegister('sp', 0x20031000)
        emu.writeRegister('lr', 0x08000100)
        emu.writePC(addr(entry))
        from ghidra.util.task import ConsoleTaskMonitor
        emu.run(ConsoleTaskMonitor())
        return

    # test vector
    master = bytes(range(16))
    # expanded keys computed by firmware's FUN_08028108
    # place master at SCRATCH, run key expansion FUN_08028108(r0=master, r1=out48)
    write_mem(SCRATCH, master)
    emulate(0x28108, [SCRATCH, SCRATCH + 0x100])
    keys48 = read_mem(SCRATCH + 0x100, 48)
    print('firmware expanded keys:')
    for i in range(0, 48, 16):
        print('  K%d: %s' % (i // 16, keys48[i:i+16].hex()))

    # encrypt block: FUN_08028244(r0=in, r1=keys, r2=out)
    block = bytes(range(0x41, 0x51))  # arbitrary test data
    write_mem(SCRATCH + 0x200, block)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    ct = read_mem(SCRATCH + 0x300, 16)
    print('firmware E(block) =', ct.hex())

    # zero block
    write_mem(SCRATCH + 0x200, b'\x00' * 16)
    emulate(0x28244, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    e0 = read_mem(SCRATCH + 0x300, 16)
    print('firmware E(0)     =', e0.hex())

    # decrypt block: FUN_08028308(r0=in, r1=keys, r2=out)
    write_mem(SCRATCH + 0x200, ct)
    emulate(0x28308, [SCRATCH + 0x200, SCRATCH + 0x100, SCRATCH + 0x300, 0])
    pt = read_mem(SCRATCH + 0x300, 16)
    print('firmware D(E(x))  =', pt.hex(), 'roundtrip', 'OK' if pt == block else 'FAIL')

    # compare with python
    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt
    rk = dt.expand_key(master)
    print('python expanded   :', rk.hex())
    print('python E(block)   =', dt.encrypt_block(block, rk).hex())
    print('python E(0)       =', dt.encrypt_block(b'\x00'*16, rk).hex())
    print('python D(E(x))    =', dt.decrypt_block(ct, rk).hex())
finally:
    project.close()
