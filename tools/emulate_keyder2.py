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

    # try FUN_08023028 (MD5->hex) first: r0=serial ptr, r1=len
    emu = EmulatorHelper(program)
    mon = ConsoleTaskMonitor()
    emu.setBreakpoint(addr(RET_MAGIC))
    tmode = program.getLanguage().getRegister('TMode')
    emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))
    serial = b'989149735933'
    emu.writeMemory(addr(SCRATCH), serial)
    emu.writeRegister('r0', SCRATCH)
    emu.writeRegister('r1', len(serial))
    emu.writeRegister('sp', 0x20031000)
    emu.writeRegister('lr', RET_MAGIC)
    emu.writeRegister('pc', 0x08023028)
    ok = emu.run(mon)
    pc = emu.readRegister('pc')
    print(f'FUN_08023028 run ok={ok} stopped pc={pc}')
    # the result: DAT_080236f4 = 0x2001529C (32-byte hex copy)
    hx = bytes(b & 0xFF for b in emu.readMemory(addr(0x2001529C), 32))
    print('fw MD5 hex:', hx.decode(errors='replace'))
    import hashlib
    print('py MD5 hex:', hashlib.md5(serial).hexdigest())
    emu.dispose()
finally:
    project.close()
