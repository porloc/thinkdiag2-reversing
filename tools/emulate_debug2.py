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

    emu = EmulatorHelper(program)
    mon = ConsoleTaskMonitor()
    emu.setBreakpoint(addr(RET_MAGIC))
    tmode = program.getLanguage().getRegister('TMode')
    emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))

    # write keys (std expansion from python) + input block
    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt
    master = bytes(range(16))
    rk = dt.expand_key(master)
    emu.writeMemory(addr(SCRATCH + 0x100), rk)
    emu.writeMemory(addr(SCRATCH + 0x200), b'\x00' * 16)

    emu.writeRegister('r0', SCRATCH + 0x200)
    emu.writeRegister('r1', SCRATCH + 0x100)
    emu.writeRegister('r2', SCRATCH + 0x300)
    emu.writeRegister('r3', 0)
    emu.writeRegister('sp', 0x20031000)
    emu.writeRegister('lr', RET_MAGIC)
    emu.writeRegister('pc', 0x08028244)
    ok = emu.run(mon)
    print(f'ok={ok} pc={emu.readRegister("pc")}')
    print('out:', bytes(b & 0xFF for b in emu.readMemory(addr(SCRATCH + 0x300), 16)).hex())
    print('python E(0):', dt.encrypt_block(b'\x00'*16, rk).hex())
    emu.dispose()
finally:
    project.close()
