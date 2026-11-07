#!/usr/bin/env python3
"""
Анализатор/распаковщик OTA-пакета Thinkdiag 2 (DOWNLOAD.bin).

Структура файла (по образцу V12.05):
  0x00000-0x00016  Заголовок:
      u32 @0x00 = 2          версия формата (?)
      u32 @0x04 = 0x00080000 размер целевого региона (0x440000-0x4C0000?) (?)
      u32 @0x08 = 4          (?)
      u32 @0x0C = 0x00050010 ДЛИНА ПОЛЕЗНОЙ НАГРУЗКИ (проверено)
      u16 @0x10 = 3, u16 @0x12 = 0x71, u16 @0x14 = 0
  0x00016-0x000CE  Блоб 184Б — зашифрованный сессионный пакет
                    (DES-ключ "0"+SN[2:6]; внутри — сессионный ключ
                     на позициях строки 0,1,8,9,10,11,16,17)
  0x000CE-0x01000  нули (выравнивание)
  0x01000-0x51010  Полезная нагрузка (0x50010): зашифрованный образ
                    (DES-ECB сессионным ключом, 8-байтовые блоки; в
                    образце V12.05 видна 16-байтовая структура повторов)

Протокол бутлоадера (V1.22/V1.23, из реверса):
  USB-CDC пакеты [cmd 0x0D][u16 BE длина][данные...]
  1-й пакет: "DOWNLOAD.BIN\\0" + u32 BE размер образца (макс 0x5F800)
  2-й пакет: сессионная строка (DES, ключ "0"+SN[2:6]) — содержит
             сессионный ключ
  далее:      данные образа (DES, сессионный ключ) -> флеш 0x4A0000
  финал:      верификация MD5 + RSA-1753 (PKCS#1 v1.5),
             токен = [SN 13Б][0x05][u32][MD5 образа]

Использование:
  python3 unpack_download.py DOWNLOAD.bin [СЕРИЙНИК]
  При указании серийника пытается расшифровать сессионный пакет
  и полезную нагрузку (ключ "0"+SN[2:6] и сессионный ключ).
"""
import argparse
import struct
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import des_thinkdiag as td


def parse_header(data: bytes):
    h = {
        'ver': struct.unpack_from('<I', data, 0)[0],
        'region_size': struct.unpack_from('<I', data, 4)[0],
        'field4': struct.unpack_from('<I', data, 8)[0],
        'payload_len': struct.unpack_from('<I', data, 0xC)[0],
        'f10': struct.unpack_from('<H', data, 0x10)[0],
        'f12': struct.unpack_from('<H', data, 0x12)[0],
        'f14': struct.unpack_from('<H', data, 0x14)[0],
    }
    return h


def analyze_payload(data: bytes):
    """Классифицирует 16-байтовые блоки payload (повторы = признак шифра)."""
    from collections import Counter
    cnt = Counter()
    for i in range(0, len(data) - 15, 16):
        cnt[data[i:i + 16]] += 1
    reps = [(b.hex(), c) for b, c in cnt.most_common(6) if c > 1]
    return reps


def try_decrypt(data: bytes, sn: bytes, outdir: str):
    print(f'Попытка расшифровки с SN={sn.decode(errors="replace")}')
    key = td.make_sn_key(sn)
    print(f'  Ключ сессионного пакета: {key!r}')

    blob = data[0x16:0xCE]
    dec = td.decrypt_ecb(key, blob)
    printable = sum(1 for b in dec if 32 <= b < 127 or b in (0, 10, 13))
    print(f'  Сессионный пакет (блоб): {printable}/{len(dec)} печатных символов')
    if printable / max(1, len(dec)) > 0.7:
        print('  Похоже на текст — сессионный пакет расшифрован!')
        print(f'  {dec[:120]!r}')
        sess = td.extract_session_key(dec)
        print(f'  СЕССИОННЫЙ КЛЮЧ: {sess!r}')
        # расшифровываем payload
        payload = data[0x1000:0x1000 + struct.unpack_from("<I", data, 0xC)[0]]
        out = td.decrypt_ecb(sess, payload)
        p = os.path.join(outdir, 'payload_decrypted.bin')
        open(p, 'wb').write(out)
        print(f'  Полезная нагрузка расшифрована -> {p}')
        return sess
    else:
        print('  Блоб не расшифровался этим ключом (см. notes/oto-crypto.md)')
        # Пробуем напрямую расшифровать payload SN-ключом
        payload = data[0x1000:0x1000 + struct.unpack_from("<I", data, 0xC)[0]]
        out = td.decrypt_ecb(key, payload[:4096])
        sp = struct.unpack('<I', out[:4])[0]
        print(f'  Прямая расшифровка payload SN-ключом: первые байты {out[:8].hex()}, SP={sp:#x}')
        if 0x20400000 <= sp < 0x20460000:
            print('  !!! Похоже на векторную таблицу — payload шифруется SN-ключом!')
            full = td.decrypt_ecb(key, payload)
            p = os.path.join(outdir, 'payload_decrypted.bin')
            open(p, 'wb').write(full)
            print(f'  -> {p}')
            return key
    return None


def main():
    ap = argparse.ArgumentParser(description='Анализатор DOWNLOAD.bin Thinkdiag 2')
    ap.add_argument('input')
    ap.add_argument('serial', nargs='?', help='серийник устройства (для расшифровки)')
    ap.add_argument('-o', '--outdir', default='download_unpacked')
    args = ap.parse_args()

    data = open(args.input, 'rb').read()
    os.makedirs(args.outdir, exist_ok=True)

    h = parse_header(data)
    print('=== Заголовок ===')
    for k, v in h.items():
        print(f'  {k} = {v:#x}' if isinstance(v, int) else f'  {k} = {v}')
    print(f'  размер файла = {len(data):#x}')
    print(f'  payload: 0x1000 - 0x{0x1000 + h["payload_len"]:x} ({h["payload_len"]} байт)')

    blob = data[0x16:0xCE]
    open(os.path.join(args.outdir, 'session_blob.bin'), 'wb').write(blob)
    payload = data[0x1000:0x1000 + h['payload_len']]
    open(os.path.join(args.outdir, 'payload_encrypted.bin'), 'wb').write(payload)
    print(f'  сохранены: session_blob.bin ({len(blob)}Б), payload_encrypted.bin ({len(payload)}Б)')

    print()
    print('=== Структура payload (повторяющиеся 16Б блоки) ===')
    for hexs, c in analyze_payload(payload):
        print(f'  {hexs} x{c}')

    if args.serial:
        print()
        try_decrypt(data, args.serial.strip().encode(), args.outdir)

    print()
    print('См. PROGRESS.md и notes/ для деталей криптографии.')


if __name__ == '__main__':
    main()
