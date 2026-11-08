#!/usr/bin/env python3
"""
Эмуляция алгоритма декодирования пиратского бутлоадера ADS (td mini) через Unicorn.

Цепочка (реконструирована статически):
  1) 0x08000ED8(dst, 0x0800C354)  — деобфускация ключа (XOR (0x0C+i))
  2) 0x08001050(key_buf)          — пост-обработка ключа (XOR (i+0xC), bound=16)
  3) 0x08002400(blob, 0x210, key, out) — AES-128-ECB декодер
     ├─ 0x08001F1C(key, expanded)  — key expansion (S-box @0x0800C785, RCON @0x200004B0)
     └─ 0x0800215C(block, expanded, out) — обработка 16-байтового блока
"""
import struct
import sys
from unicorn import *
from unicorn.arm_const import *

FLASH_BASE = 0x08000000
FLASH_SIZE = 0x10000
RAM_BASE   = 0x20000000
RAM_SIZE   = 0x10000
STACK_TOP  = 0x2000F000
DATA_SRC   = 0xCDD0          # источник .data во флеше
DATA_LEN   = 0x1D90          # 0x20000000..0x20001D90

# рабочие буферы в RAM
KEY_BUF    = 0x20008000
OUT_BUF    = 0x20009000
OUT_BUF2   = 0x2000A000

MAGIC_RET  = 0x0800F000      # фиктивный адрес возврата (стёртая область)


def make_emu(data: bytes) -> Uc:
    uc = Uc(UC_ARCH_ARM, UC_MODE_THUMB | UC_MODE_MCLASS)
    uc.mem_map(FLASH_BASE, FLASH_SIZE)
    uc.mem_write(FLASH_BASE, data)
    uc.mem_map(RAM_BASE, RAM_SIZE)
    # .data
    uc.mem_write(RAM_BASE, data[DATA_SRC:DATA_SRC + DATA_LEN])
    # .bss уже нулевая
    return uc


def call(uc: Uc, func: int, args, timeout=5_000_000):
    """Вызов Thumb-функции с аргументами, возврат по MAGIC_RET."""
    sp = STACK_TOP
    # LR с Thumb-битом
    lr = MAGIC_RET | 1
    uc.reg_write(UC_ARM_REG_SP, sp)
    uc.reg_write(UC_ARM_REG_LR, lr)
    regs = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3]
    for r, v in zip(regs, args):
        uc.reg_write(r, v)
    uc.emu_start(func | 1, MAGIC_RET, timeout=timeout)
    return uc.reg_read(UC_ARM_REG_R0)


def main():
    data = open(sys.argv[1] if len(sys.argv) > 1 else 'ads_boot/ads_download', 'rb').read()

    uc = make_emu(data)

    # === 1. Деобфускация ключа ===
    r = call(uc, 0x08000ED8, (KEY_BUF, FLASH_BASE + 0xC354))
    key_deobf = uc.mem_read(KEY_BUF, 32)
    print('после 0x08000ED8 :', bytes(key_deobf[:20]).hex(), repr(bytes(key_deobf[:20])))

    # === 2. Пост-обработка ключа ===
    r = call(uc, 0x08001050, (KEY_BUF,))
    key_final = uc.mem_read(KEY_BUF, 32)
    print('после 0x08001050 :', bytes(key_final[:20]).hex(), repr(bytes(key_final[:20])))

    # === 3. AES-декодирование блоба ===
    r = call(uc, 0x08002400, (FLASH_BASE + 0xC144, 0x210, KEY_BUF, OUT_BUF))
    out = bytes(uc.mem_read(OUT_BUF, 0x210))
    print(f'0x08002400 вернула: 0x{r:X}')
    print('=== Расшифрованный блоб (первые 0x100) ===')
    for off in range(0, 0x100, 16):
        row = out[off:off+16]
        print(f'{off:04X}: ' + ' '.join(f'{b:02X}' for b in row) + '  ' +
              ''.join(chr(b) if 32 <= b < 127 else '.' for b in row))
    open('ads_boot/blob_decrypted.bin', 'wb').write(out)

    # === Проверка: повторная обработка (вторая копия блоба 0x0800C365) ===
    print()
    print('=== Хвост (0x1C0-0x210) ===')
    for off in range(0x1C0, 0x210, 16):
        row = out[off:off+16]
        print(f'{off:04X}: ' + ' '.join(f'{b:02X}' for b in row) + '  ' +
              ''.join(chr(b) if 32 <= b < 127 else '.' for b in row))


if __name__ == '__main__':
    main()
