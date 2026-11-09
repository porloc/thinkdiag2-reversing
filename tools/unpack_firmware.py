#!/usr/bin/env python3
"""
Распаковщик прошивки Thinkdiag 2 (из .mot / .bin дампа).

Извлекает все регионы флеша, анализирует трейлеры, сохраняет компоненты.

Карта флеша (подтверждена реверсом):
  0x00400000-0x00410000  Бутлоадер (V1.22/V1.23)
  0x0040FF1F             флаг бутлоадера
  0x0040FF20-0x00410000  трейлер бутлоадера (подпись 220Б + 0xDC + BE32 размер)
  0x00420000             конфиг-страница (13Б)
  0x0043F800             конфиг-флаг
  0x00440000-0x004A0000  область 0x440000 (ресурсы/staging, зашифровано)
  0x004A0000+            ПРИЛОЖЕНИЕ (plaintext, векторная таблица Cortex-M7)
  конец региона app      трейлер: [флаг][подпись 219Б][0xDC][BE32 размер данных]

  TD2:  app-регион до 0x004FF000 (трейлер @0x004FEF1F)
  DB7:  app-регион до 0x00500000 (трейлер @0x004FFF1F)

Трейлер региона (B = база, конец = B+0x60000):
  [конец-0x05] = 0xDC (220) — маркер размера подписи
  [конец-0x04..конец-0x01] = BE32 u32 — размер данных образа в регионе
  подпись = 220Б, заканчивается на [конец-0x05]
  флаг валидности = байт непосредственно перед подписью
"""
import argparse
import struct
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from mot2bin import srec_to_bin

FLASH_BASE = 0x00400000
FLASH_SIZE = 0x100000


def parse_trailer(data: bytes, region_end_flash: int):
    """Разбирает трейлер региона. region_end_flash — конец региона (не включительно)."""
    off = region_end_flash - FLASH_BASE
    if off < 5 or off > len(data):
        return None
    sig_size = data[off - 5]
    size_be = struct.unpack('>I', data[off - 4:off])[0]
    # подпись = sig_size байт, ВКЛЮЧАЯ байт флага (первый байт) — см. DB7 0x40A0B0:
    # sb = base - fp + 0x5FFFB, копируется fp байт от sb (флаг входит в подпись)
    sig = data[off - 5 - sig_size:off - 5]
    flag = sig[0] if sig else None
    return {
        'sig_size': sig_size,
        'image_size': size_be,
        'signature': sig,
        'flag': flag,
        'flag_addr': region_end_flash - 5 - sig_size,
        'sig_addr': region_end_flash - 5 - sig_size + 1,
    }


def find_app(data: bytes):
    """Ищет векторную таблицу приложения (валидный SP + reset в Cortex-M7)."""
    results = []
    for off in range(0, len(data) - 0x400, 4):
        w0, w1 = struct.unpack('<II', data[off:off + 8])
        if 0x20400000 <= w0 < 0x20460000 and (w0 & 7) == 0 \
                and 0x004A0001 <= w1 < 0x00500000 and (w1 & 1):
            ok = True
            for k in range(2, 10):
                w = struct.unpack('<I', data[off + k * 4:off + k * 4 + 4])[0]
                if not (0x004A0000 <= w < 0x00500000 or w == 0):
                    ok = False
                    break
            if ok:
                results.append(FLASH_BASE + off)
    return results


def region_bounds(data: bytes, start_flash: int):
    """Последний ненулевой (не 0xFF) байт начиная с start_flash."""
    off = start_flash - FLASH_BASE
    last = off
    for i in range(off, len(data)):
        if data[i] != 0xFF:
            last = i
    return FLASH_BASE + last


def analyze(data: bytes, name: str):
    print(f'=== {name} ===')
    # карта непустых 4КБ страниц
    print('Карта флеша:')
    runs = []
    prev_end = None
    for page in range(0, FLASH_SIZE, 0x1000):
        chunk = data[page:page + 0x1000]
        if any(b != 0xFF for b in chunk):
            if prev_end == page:
                runs[-1][1] = page + 0x1000
            else:
                runs.append([page, page + 0x1000])
            prev_end = page + 0x1000
    for s, e in runs:
        print(f'  0x{FLASH_BASE + s:08X}-0x{FLASH_BASE + e:08X}  ({e - s:#x})')

    # трейлер бутлоадера
    t = parse_trailer(data, 0x00410000)
    if t:
        print(f'Трейлер бутлоадера: flag={t["flag"]:#04x} @{t["flag_addr"]:#010x}, '
              f'размер={t["image_size"]:#x}, подпись {t["sig_size"]}Б')

    # векторные таблицы приложений
    apps = find_app(data)
    print(f'Векторные таблицы приложений: {[hex(a) for a in apps]}')

    # трейлеры для обоих вариантов конца app-региона
    for rend in (0x004FF000, 0x00500000):
        t = parse_trailer(data, rend)
        if t and t['sig_size'] == 0xDC:
            print(f'Трейлер app (регион до {rend:#x}): flag={t["flag"]:#04x} '
                  f'@{t["flag_addr"]:#010x}, размер данных={t["image_size"]:#x}')
            app_start = apps[0] if apps else 0x004A0000
            data_end = app_start + t['image_size']
            print(f'  => данные app: {app_start:#x}-{data_end:#x}')
    print()
    return {'runs': runs, 'apps': apps, 'trailers': t}


def unpack(data: bytes, outdir: str, label: str):
    os.makedirs(outdir, exist_ok=True)
    apps = find_app(data)
    app_start = apps[0] if apps else 0x004A0000

    # Определяем конец app-региона по валидному трейлеру
    app_region_end = None
    for rend in (0x004FF000, 0x00500000):
        t = parse_trailer(data, rend)
        if t and t['sig_size'] == 0xDC:
            app_region_end = rend
            break

    parts = {}
    # бутлоадер
    boot = data[0:0x10000]
    parts['bootloader.bin'] = boot
    # конфиг
    cfg = data[0x20000:0x21000]
    if any(b != 0xFF for b in cfg):
        parts['config_420000.bin'] = cfg
    # страница 0x43F000 (байт-флаг на 0x43F800)
    page43f = data[0x3F000:0x40000]
    if any(b != 0xFF for b in page43f):
        parts['page_43f000.bin'] = page43f
    # блоб 0x440000
    blob = data[0x40000:0xA0000]
    if any(b != 0xFF for b in blob):
        parts['blob_440000_encrypted.bin'] = blob
    # приложение
    img_size = 0
    if app_region_end:
        t = parse_trailer(data, app_region_end)
        img_size = t['image_size']
    app = data[app_start - FLASH_BASE: app_start - FLASH_BASE + img_size] if img_size else \
        data[app_start - FLASH_BASE: app_region_end - 5 - 0xDC - 1 if app_region_end else 0xE0000]
    parts[f'app_{app_start:08x}.bin'] = app
    # трейлер app
    if app_region_end:
        t = parse_trailer(data, app_region_end)
        parts['app_trailer.bin'] = data[t['flag_addr'] - FLASH_BASE: app_region_end - FLASH_BASE]

    for fn, blob_data in parts.items():
        path = os.path.join(outdir, fn)
        with open(path, 'wb') as f:
            f.write(blob_data)
        print(f'  {label}: {path} ({len(blob_data)} байт)')
    return parts


def main():
    ap = argparse.ArgumentParser(description='Распаковщик прошивки Thinkdiag 2')
    ap.add_argument('input', help='.mot (S-record) или .bin дамп')
    ap.add_argument('-o', '--outdir', default='unpacked', help='каталог вывода')
    ap.add_argument('--bin', action='store_true', help='вход уже бинарный')
    args = ap.parse_args()

    if args.bin or args.input.lower().endswith('.bin'):
        data = open(args.input, 'rb').read()
        if len(data) != FLASH_SIZE:
            print(f'Предупреждение: размер {len(data):#x} != {FLASH_SIZE:#x}')
    else:
        data = srec_to_bin(args.input)

    analyze(data, args.input)
    unpack(data, args.outdir, args.input)


if __name__ == '__main__':
    main()
