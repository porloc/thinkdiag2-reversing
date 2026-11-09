#!/usr/bin/env python3
"""
unpack_downloadbin_ads.py — распаковка OTA-файлов пиратского сервера ADS (td mini).

АЛГОРИТМ ДЕКОДИРОВАНИЯ ADS-БУТЛОАДЕРА (полностью реверсирован):
================================================================

Пиратский бут (64КБ, STM32F1, base 0x08000000) содержит СОФТВЕРНУЮ криптографию
вместо смарт-карточной расшифровки стока:

  1) Пакеты OTA (0x1000 байт) принимаются от хоста
  2) Ключ = СТАТИЧЕСКИЕ сырые байты из флеша @0x0800DE10 (16Б):
       1c cf 6b f5 23 81 fa 80 48 3e 5b 2b 18 a2 99 ff
     (двойная XOR-обфускация (0x0C+i) в 0x08007430 + 0x08007640 взаимно сокращается)
  3) Блочный шифр (кастомный «AES-подобный», 16-байтовые блоки, ECB):
       rk[0..2] = первые 48Б СТАНДАРТНОГО AES-128 key expansion
       state ^= rk[2]
       state = InvShiftRows(InvSubBytes(state))    # канонические AES-таблицы
       state ^= rk[1]
       state = ARX_Mix(state, T)                   # кастомная ARX-функция
       state ^= rk[0]
     ARX_Mix (0x08001BB8): 16 итераций × 6 раундов, константы
       0xAA66D2B0 / 0xCFC06585 / 0x6DF7DF3E / 0x0C2F58F7 (+0x255992D5 на итерацию),
       таблица T = 32Б из флеша @0x0800C990 (копируется в RAM 0x20003F30)
  4) Расшифрованные данные пишутся во флеш 0x08010000+ напрямую

  Кроме того, во флеше есть ЗАШИФРОВАННЫЙ 528-байтовый блоб @0x0800C144
  (дубликат @0x0800C365) — ключевой материал пиратов (вероятно их RSA-ключ),
  расшифровывается тем же шифром с ключом @0x0800C354:
       73 7d 78 75 63 76 25 40 70 23 7d 71 66 65 63 7b  ("s}xucv%@p#}qfec{")

ВАЖНО ПРО DES-ТАБЛИЦЫ: в ADS-буте НЕТ DES-кода вообще (проверено сканом
канонических сигнатур IP/FP/S1-S8/E/P/PC1/PC2/shifts — ни одна не найдена).
Таблицы из мёртвого кода стокового дампа мини (@0x0800E51C) НЕ применимы:
алгоритм ADS — гибрид AES+ARU со СВОИМИ полными таблицами. Официальные
DOWNLOAD.BIN (V12.05) шифруются СМАРТ-КАРТОЙ и этим ключом не расшифровываются
(проверено: ни один из 8 ключей-кандидатов не даёт валидного результата).

Использование:
  python3 tools/unpack_downloadbin_ads.py --boot ads_boot/ads_download \
         [--file dl_extract/989149735933/DOWNLOAD.bin] [--dump-blob]
"""
import argparse
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from ads_cipher import (ads_decode, ads_encode, extract_ads_params,
                        aes128_expand48, arx_mix, SBOX, INV_SBOX)

BLOB_OFF = 0xC144
BLOB_LEN = 0x210


def looks_like_fw(dec: bytes) -> str:
    """Эвристики валидности расшифрованного образа."""
    notes = []
    if len(dec) >= 8:
        sp, reset = struct.unpack_from('<II', dec, 0)
        if 0x20000000 <= sp < 0x20010000 and 0x08010000 <= reset < 0x080C0000 and (reset & 1):
            notes.append(f'ARM-векторы: SP=0x{sp:08X}, reset=0x{reset:08X} — ПРИЛОЖЕНИЕ!')
    # TLV-заголовок мини: LE16=2 ...
    if len(dec) >= 16:
        v = struct.unpack_from('<H', dec, 0)[0]
        if v == 2 and dec[6:8] == b'\x08\x00':
            notes.append('TLV-заголовок мини (ver=2)!')
        if dec[:4] == b'\xd9\x06\x00\x00':
            notes.append('RSA-1753 мастер-таблица!')
    # Заполнение нулями/FF
    tail = dec[len(dec) // 2:]
    if tail.count(0) > 0.9 * len(tail):
        notes.append('хвост заполнен нулями (пейдинг)')
    if tail.count(0xFF) > 0.9 * len(tail):
        notes.append('хвост заполнен FF (пейдинг)')
    return '; '.join(notes)


def main():
    ap = argparse.ArgumentParser(description='Распаковка ADS OTA / анализ бута')
    ap.add_argument('--boot', default='ads_boot/ads_download', help='образ ADS-бутлоадера')
    ap.add_argument('--file', help='DOWNLOAD.bin для попытки распаковки')
    ap.add_argument('--key', choices=['ota', 'blob'], default='ota', help='какой ключ использовать')
    ap.add_argument('--dump-blob', action='store_true', help='расшифровать внутренний блоб 528Б')
    ap.add_argument('--out', help='выходной файл для расшифрованных данных')
    args = ap.parse_args()

    boot = open(args.boot, 'rb').read()
    p = extract_ads_params(boot)
    T = p['T']
    print('=== Параметры ADS-бутлоадера ===')
    print('ARX-таблица T (@0x0800C990):', ' '.join(f'{w:08x}' for w in T))
    print('Ключ OTA-payload (@0x0800DE10):', p['key_ota'].hex(), repr(p['key_ota']))
    print('Ключ RSA-блоба  (@0x0800C354):', p['key_blob'].hex(), repr(p['key_blob']))
    print()

    if args.dump_blob:
        blob = boot[BLOB_OFF:BLOB_OFF + BLOB_LEN]
        dec = ads_decode(blob, p['key_blob'], T)
        out = args.out or 'ads_boot/blob_decrypted.bin'
        open(out, 'wb').write(dec)
        print(f'=== Расшифрованный внутренний блоб ({BLOB_LEN}Б) → {out} ===')
        for off in range(0, 0x80, 16):
            row = dec[off:off + 16]
            print(f'{off:04X}: ' + ' '.join(f'{b:02X}' for b in row) + '  ' +
                  ''.join(chr(b) if 32 <= b < 127 else '.' for b in row))
        print('... (повторяющееся заполнение 0x110-0x1FF, хвост 0x200-0x20F)')
        print()

    if args.file:
        dl = open(args.file, 'rb').read()
        key = p['key_ota'] if args.key == 'ota' else p['key_blob']
        print(f'=== Попытка распаковки {args.file} ({len(dl)}Б) ключом {args.key} ===')
        # 1) весь файл как поток блоков
        dec = ads_decode(dl, key, T)
        print('Файл целиком:', looks_like_fw(dec) or 'не похоже на прошивку')
        # 2) payload со смещения 0x1000 (формат мини)
        if len(dl) > 0x1000:
            dec2 = ads_decode(dl[0x1000:], key, T)
            print('Payload @0x1000:', looks_like_fw(dec2) or 'не похоже на прошивку')
            out = args.out or 'ads_boot/decoded_payload.bin'
            open(out, 'wb').write(dec2)
            print(f'  → {out} (первые 64Б): {dec2[:64].hex()}')
        print()
        print('ВЫВОД: если ни одна эвристика не сработала — файл зашифрован ДРУГИМ')
        print('ключом (официальные файлы Thinkcar шифруются смарт-картой устройства).')


if __name__ == '__main__':
    main()
