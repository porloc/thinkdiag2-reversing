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

    print('blocks:', [(b.getName(), str(b.getStart()), str(b.getEnd())) for b in mem.getBlocks()])

    SCRATCH = 0x20030000
    RET_MAGIC = 0x08000100

    # write master key via program memory
    txid = program.startTransaction('w')
    try:
        master = bytes(range(16))
        for i, b in enumerate(master):
            v = b if b < 128 else b - 256
            mem.setByte(addr(SCRATCH + i), v)
    finally:
        program.endTransaction(txid, True)
    # read back
    rb = bytes((mem.getByte(addr(SCRATCH + i)) & 0xFF) for i in range(16))
    print('readback SCRATCH:', rb.hex())

    emu = EmulatorHelper(program)
    mon = ConsoleTaskMonitor()
    emu.setBreakpoint(addr(RET_MAGIC))
    tmode = program.getLanguage().getRegister('TMode')
    emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))
    # also write via emu
    emu.writeMemory(addr(SCRATCH), master)
    emu.writeRegister('r0', SCRATCH)
    emu.writeRegister('r1', SCRATCH + 0x100)
    emu.writeRegister('sp', 0x20031000)
    emu.writeRegister('lr', RET_MAGIC)
    emu.writeRegister('pc', 0x08028108)
    ok = emu.run(mon)
    pc_after = emu.readRegister('pc')
    print(f'run ok={ok} pc_after={pc_after}')
    out = bytes(b & 0xFF for b in emu.readMemory(addr(SCRATCH + 0x100), 48))
    print('expanded:', out.hex())
    emu.dispose()
finally:
    project.close()
