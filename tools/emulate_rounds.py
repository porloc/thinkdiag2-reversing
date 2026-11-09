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

    def run_fn(entry, r0):
        emu = EmulatorHelper(program)
        mon = ConsoleTaskMonitor()
        emu.setBreakpoint(addr(RET_MAGIC))
        tmode = program.getLanguage().getRegister('TMode')
        emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))
        emu.writeRegister('r0', r0)
        emu.writeRegister('sp', 0x20031000)
        emu.writeRegister('lr', RET_MAGIC)
        emu.writeRegister('pc', 0x08000000 + entry)
        ok = emu.run(mon)
        pc = int(str(emu.readRegister('pc')), 16) if emu.readRegister('pc') else 0
        out = bytes(b & 0xFF for b in emu.readMemory(addr(r0), 16))
        emu.dispose()
        return ok, pc, out

    import sys
    sys.path.insert(0, '/home/z/thinkdiag/tools')
    import decrypt_tool as dt

    state = bytes(range(0x30, 0x40))

    # FUN_08027a90 — SubBytes+ShiftRows
    emu.writeMemory(addr(SCRATCH), state) if False else None
    # write via fresh helper each time inside run_fn — need to pass data
    def run_fn_data(entry, data):
        emu = EmulatorHelper(program)
        mon = ConsoleTaskMonitor()
        emu.setBreakpoint(addr(RET_MAGIC))
        tmode = program.getLanguage().getRegister('TMode')
        emu.setContextRegister(RegisterValue(tmode, BigInteger.valueOf(1)))
        emu.writeMemory(addr(SCRATCH), data)
        emu.writeRegister('r0', SCRATCH)
        emu.writeRegister('sp', 0x20031000)
        emu.writeRegister('lr', RET_MAGIC)
        emu.writeRegister('pc', 0x08000000 + entry)
        ok = emu.run(mon)
        pc = int(str(emu.readRegister('pc')), 16) if emu.readRegister('pc') else 0
        out = bytes(b & 0xFF for b in emu.readMemory(addr(SCRATCH), 16))
        emu.dispose()
        return ok, pc, out

    tests = [
        (0x27a90, 'SB+SR (enc final)'),
        (0x27b3a, 'iSB+iSR (dec)'),
        (0x27be4, 'SB+SR+MC (enc r1)'),
        (0x27ea2, 'iMC+iSR+iSB (dec r2)'),
    ]
    for entry, name in tests:
        ok, pc, out = run_fn_data(entry, state)
        print(f'{name:22s} ok={ok} pc=0x{pc:X} out={out.hex()}')

    # python equivalents
    st = list(state)
    dt.sub_shift_rows(st)
    print('python SB+SR          ', bytes(st).hex())
    st = list(state)
    dt.inv_sub_shift_rows(st)
    print('python iSB+iSR         ', bytes(st).hex())
    st = list(state)
    dt.mix_columns_ttables(st)
    print('python SB+SR+MC        ', bytes(st).hex())
    st = list(state)
    dt.inv_mix_columns_ttables(st)
    print('python iMC+iSR+iSB     ', bytes(st).hex())
finally:
    project.close()
