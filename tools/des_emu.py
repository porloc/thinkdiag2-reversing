#!/usr/bin/env python3
"""Emulate the TD2 bootloader DES driver (0x004072B0) via Unicorn."""
import struct
from unicorn import *
from unicorn.arm_const import *

FLASH_BASE = 0x00400000
RAM_BASE   = 0x20400000
RAM_SIZE   = 0x40000

class DesEmu:
    def __init__(self, fw_path):
        self.fw = open(fw_path, "rb").read()
        self.uc = Uc(UC_ARCH_ARM, UC_MODE_THUMB)
        # Map flash
        self.uc.mem_map(FLASH_BASE, 0x100000)
        self.uc.mem_write(FLASH_BASE, self.fw)
        # Map RAM (incl. all globals used: 0x204020F8, 0x204102xx, 0x204110xx...)
        self.uc.mem_map(RAM_BASE, RAM_SIZE)
        # Map the flag region at 0x28000000 (read by DES wrapper)
        self.uc.mem_map(0x28000000, 0x1000)
        # Map stack
        self.uc.mem_map(0x20000000, 0x40000)
        # svc handler via invalid hook: we stop at return address
        self.sp = 0x20020000

    def call(self, func_addr, args, timeout=20000000):
        """Call a Thumb function with args (up to 6: r0-r3, [sp], [sp+4])."""
        uc = self.uc
        # Initialize DES state pointers (normally set at boot):
        # L state = 0x20410D24, R state = 0x20410D44 (IP output halves)
        # C half = 0x20410D64, D half = 0x20410D80 (PC1 output halves)
        uc.mem_write(0x204020F4, struct.pack("<I", 0x20410D24))
        uc.mem_write(0x204020F8, struct.pack("<I", 0x20410D44))
        uc.mem_write(0x204020FC, struct.pack("<I", 0x20410D64))
        uc.mem_write(0x20402100, struct.pack("<I", 0x20410D80))
        lr = 0x00400000  # mapped flash start used as return/stop marker
        sp = self.sp & ~7
        # push args 5,6 if given: arg5 at lowest address [sp], arg6 at [sp+4]
        extra = args[4:]
        for v in reversed(extra):
            sp -= 4
            uc.mem_write(sp, struct.pack("<I", v & 0xFFFFFFFF))
        uc.reg_write(UC_ARM_REG_SP, sp)
        uc.reg_write(UC_ARM_REG_LR, lr)
        for i, v in enumerate(args[:4]):
            uc.reg_write(UC_ARM_REG_R0 + i, v & 0xFFFFFFFF)
        uc.reg_write(UC_ARM_REG_PC, func_addr | 1)
        try:
            uc.emu_start(func_addr | 1, lr, timeout=timeout)
        except UcError as e:
            # stopped at LR is expected via until-address; catch others
            pc = uc.reg_read(UC_ARM_REG_PC)
            if pc != lr and (pc & ~1) != lr:
                raise RuntimeError(f"emu error at 0x{pc:08X}: {e}")
        return uc.reg_read(UC_ARM_REG_R0)

    def des_ecb(self, dst, src, length, key, keylen, mode):
        """Call wrapper 0x004072B0(dst, src, len, key, keylen, mode)."""
        return self.call(0x004072B0, [dst, src, length, key, keylen, mode])

if __name__ == "__main__":
    emu = DesEmu("/home/z/thinkdiag/fw_extract/TD2.bin")
    # test data
    key = b"4973d914"
    data = b"12345678" * 2
    uc = emu.uc
    KEY = 0x20430000
    SRC = 0x20430100
    DST = 0x20430200
    uc.mem_write(KEY, key)
    uc.mem_write(SRC, data)
    r = emu.des_ecb(DST, SRC, 16, KEY, 8, 1)  # mode=1 (per code: decrypt?)
    out_dec = uc.mem_read(DST, 16)
    r = emu.des_ecb(DST, SRC, 16, KEY, 8, 0)  # mode=0
    out_enc = uc.mem_read(DST, 16)
    print(f"emulated decrypt(mode=1): {bytes(out_dec).hex()}")
    print(f"emulated encrypt(mode=0): {bytes(out_enc).hex()}")

    from Crypto.Cipher import DES
    c = DES.new(key, DES.MODE_ECB)
    print(f"pycryptodome decrypt:      {c.decrypt(data).hex()}")
    print(f"pycryptodome encrypt:      {c.encrypt(data).hex()}")
