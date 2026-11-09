#!/usr/bin/env python3
"""
Упаковщик образа флеша Thinkdiag 2 для заливки внешним программатором
(J-Flash / CH341A / RT809H и т.п.).

Собирает полный 1МБ образ 0x00400000-0x00500000 из компонентов:
  - бутлоадер (обязательно, 64КБ)
  - конфиг-страница 0x00420000 (опционально)
  - приложение (plaintext образ с векторной таблицей) на 0x004A0000
  - трейлер app-региона: [флаг][подпись 219Б][0xDC][BE32 размер]

ВАЖНО про подпись и загрузку:
  Верификация RSA-подписи (модуль 1753 бит) выполняется бутлоадером
  ПОСЛЕ OTA-приёма. Закрытый ключ — на сервере Thinkcar, поэтому
  для МОДИФИЦИРОВАННОГО приложения подпись скопировать неоткуда —
  используется подпись из исходного дампа. Если бутлоадер проверяет
  подпись только при OTA (а при обычной загрузке смотрит только флаг),
  модифицированное приложение загрузится. Проверяется экспериментально.

Использование:
  python3 pack_flash.py --boot bootloader.bin --app app.bin \
      --trailer app_trailer.bin -o flash_1mb
  # trailer из распаковки стока (flag+подпись+размер); если не указан,
  # будет сгенерирован: flag=0x00, подпись нулевая, размер = len(app)
"""
import argparse
import struct
import os
import sys

FLASH_BASE = 0x00400000
FLASH_SIZE = 0x100000
APP_ADDR = 0x004A0000
SIG_SIZE = 0xDC          # 220 = флаг(1) + подпись(219)
SIG_MARKER = 0xDC        # байт-маркер размера подписи в конце трейлера


def bin_to_mot(data: bytes, base: int, out_path: str, line_len=32):
    """S-record (S2/S3, 16 байт данных — как в стоковых .mot)."""
    n = 0
    with open(out_path, 'w') as f:
        # заголовок S0 "HDR"
        hdr = bytes([3, 0x00, 0x00]) + b'HDR'
        cs = (~sum(hdr)) & 0xFF
        f.write(f'S0{hdr.hex()}{cs:02X}\n')
        for off in range(0, len(data), line_len):
            chunk = data[off:off + line_len]
            addr = base + off
            rec = bytes([len(chunk) + 4]) + struct.pack('>I', addr)[1:4] + chunk
            cs = (~sum(rec)) & 0xFF
            f.write(f'S2{rec.hex()}{cs:02X}\n')
            n += 1
        # S9: стартовый адрес (начало флеша)
        end = bytes([3]) + struct.pack('>H', (base >> 8) & 0xFFFF) + b''
        end = bytes([4]) + struct.pack('>I', base)
        cs = (~sum(end)) & 0xFF
        f.write(f'S9{end.hex()}{cs:02X}\n')
    return n


def build_trailer(app_len: int, flag: int = 0x00, sig_219: bytes = None) -> bytes:
    """Трейлер app-региона: [флаг][подпись 219Б][0xDC][BE32 размер]."""
    if sig_219 is None:
        sig_219 = b'\x00' * 219
    assert len(sig_219) == 219
    t = bytes([flag]) + sig_219 + bytes([SIG_MARKER]) + struct.pack('>I', app_len)
    assert len(t) == 225
    return t


def main():
    ap = argparse.ArgumentParser(description='Упаковщик образа Thinkdiag 2')
    ap.add_argument('--boot', required=True, help='бутлоадер .bin (64КБ)')
    ap.add_argument('--app', help='приложение .bin (plaintext, векторная таблица)')
    ap.add_argument('--app-addr', type=lambda x: int(x, 0), default=APP_ADDR)
    ap.add_argument('--trailer', help='трейлер из стока (225Б: flag+sig+DC+size)')
    ap.add_argument('--flag', type=lambda x: int(x, 0), default=0x00,
                    help='флаг валидности app (по умолчанию 0x00)')
    ap.add_argument('--config', help='конфиг-страница 4КБ для 0x00420000')
    ap.add_argument('--blob', help='данные региона 0x00440000 (зашифрованные ресурсы)')
    ap.add_argument('--extra', action='append', default=[],
                    help='доп. файлы: path:addr (hex), напр. bootmgr.bin:0x480000')
    ap.add_argument('-o', '--out', default='flash_image', help='база имени вывода')
    ap.add_argument('--region-end', type=lambda x: int(x, 0), default=0x004FF000,
                    help='конец app-региона (TD2: 0x4FF000, DB7: 0x500000)')
    args = ap.parse_args()

    flash = bytearray(b'\xFF' * FLASH_SIZE)

    boot = open(args.boot, 'rb').read()
    if len(boot) > 0x10000:
        raise SystemExit('бутлоадер больше 64КБ')
    flash[0:len(boot)] = boot
    print(f'бутлоадер: {len(boot)} байт @ 0x00400000')

    if args.config:
        cfg = open(args.config, 'rb').read()
        flash[0x20000:0x20000 + len(cfg)] = cfg[:0x1000]
        print(f'конфиг: {len(cfg)} байт @ 0x00420000')

    if args.blob:
        blob = open(args.blob, 'rb').read()
        if len(blob) > 0x60000:
            raise SystemExit('блоб больше 0x60000')
        flash[0x40000:0x40000 + len(blob)] = blob
        print(f'блоб: {len(blob)} байт @ 0x00440000')

    for spec in args.extra:
        path, addr = spec.rsplit(':', 1)
        addr = int(addr, 0)
        d = open(path, 'rb').read()
        off = addr - FLASH_BASE
        flash[off:off + len(d)] = d
        print(f'extra: {path} {len(d)} байт @ {addr:#x}')

    if args.app:
        app = open(args.app, 'rb').read()
        # проверка векторной таблицы
        sp, reset = struct.unpack('<II', app[:8])
        print(f'app: {len(app)} байт @ {args.app_addr:#x}; SP={sp:#010x}, reset={reset:#010x}')
        if not (0x20400000 <= sp < 0x20460000 and (reset & 1)):
            print('ПРЕДУПРЕЖДЕНИЕ: векторная таблица не похожа на Cortex-M7!')
        off = args.app_addr - FLASH_BASE
        if off + len(app) > args.region_end - FLASH_BASE - 0xE1:
            raise SystemExit('приложение не влезает в регион')
        flash[off:off + len(app)] = app

        # трейлер
        if args.trailer:
            tr = open(args.trailer, 'rb').read()
            if len(tr) != 225:
                print(f'ПРЕДУПРЕЖДЕНИЕ: трейлер {len(tr)}Б != 225Б, использую как есть')
            # перезаписываем размер данных под новое приложение
            if len(tr) >= 225:
                tr = bytearray(tr)
                tr[221:225] = struct.pack('>I', len(app))
                # флаг
                tr[0] = args.flag
                tr = bytes(tr)
        else:
            sig = None
            tr = build_trailer(len(app), args.flag, sig)
        toff = args.region_end - FLASH_BASE - len(tr)
        flash[toff:toff + len(tr)] = tr
        print(f'трейлер: {len(tr)} байт @ {args.region_end - len(tr):#x} '
              f'(флаг={tr[0]:#04x}, размер={len(app):#x})')

    bin_path = args.out + '.bin'
    with open(bin_path, 'wb') as f:
        f.write(flash)
    print(f'записано: {bin_path} ({len(flash)} байт)')

    mot_path = args.out + '.mot'
    n = bin_to_mot(flash, FLASH_BASE, mot_path)
    print(f'записано: {mot_path} ({n} записей)')

    # сравнение с оригиналом, если указан
    print()
    print('Для J-Flash: чип Microchip ATSAME70Q20A, флеш 0x00400000, полная карта секторов 0-9')
    print('Для CH341A/RT809H: образ отображается на внутреннюю флеш MCU — используйте SWD/JTAG')


if __name__ == '__main__':
    main()
