#!/usr/bin/env python3
"""
Сборщик OTA-пакета Thinkdiag 2 (DOWNLOAD.bin).

СТАТУС: шаблон. Полная сборка валидного OTA заблокирована двумя вещами:

1) СЕССИОННАЯ КРИПТОГРАФИЯ (транспорт):
   Бутлоадер V1.22/V1.23 (наш дамп) работает так:
     - сессионный пакет шифруется DES-ключом "0"+SN[2:6] (реализовано в
       des_thinkdiag.py — расшифровка готова);
     - внутри — случайный 8-байтовый сессионный ключ (позиции строки
       0,1,8,9,10,11,16,17);
     - данные образа шифруются DES сессионным ключом.
   В файле V12.05 блоб сессионного пакета НЕ расшифровывается ключом из
   серийника-имени папки => либо формат серийника другой, либо у новой
   ревизии бутлоадера другая схема (16-байтовые блоки намекают на AES).
   ЧТО НУЖНО: дамп бутлоадера НОВОЙ ревизии ИЛИ sniff USB/BT сессии OTA.

2) RSA-ПОДПИСЬ (верификация):
   Токен = [SN 13Б][0x05][u32][MD5 образа], подпись RSA-1753 (e=65537,
   PKCS#1 v1.5). Публичный модуль есть во флеша (@0x40C3B8 у DB7).
   Закрытый ключ — на сервере Thinkcar => свои образы подписать нельзя.
   ОБХОД: патч бутлоадера (NOP на вызов verify 0x40A0B0/0x40B2F8 или на
   сравнение в 0x40B640) + заливка программатором. Тогда OTA-приём будет
   принимать любые образы. Либо заливать готовый образ напрямую
   программатором (pack_flash.py) — подпись вообще не проверяется.

Использование (когда ключи известны):
  python3 make_ota.py --app app.bin --serial 989149735933 \
      [--session-key XXXXXXXXXXXXXXXX] -o DOWNLOAD.bin
"""
import argparse
import struct
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import des_thinkdiag as td


def build_download(app: bytes, session_key: bytes, serial: bytes,
                   region_size=0x80000, f10=3, f12=0x71) -> bytes:
    """Собирает DOWNLOAD.bin в формате V12.05."""
    # payload = DES-ECB(сессионный ключ, app) c паддингом до 16 байт?
    # (16-байтовая структура повторов в образце намекает на выравнивание 16)
    pad_len = (-len(app)) % 16
    padded = app + b'\x00' * pad_len
    payload = td.encrypt_ecb(session_key, padded)

    # сессионная строка: ключ на позициях 0,1,8,9,10,11,16,17
    # (формат остальных полей неизвестен — см. PROGRESS.md)
    s = bytearray(b'\x00' * 0x20)
    pos = [0, 1, 8, 9, 10, 11, 16, 17]
    for i, p in enumerate(pos):
        s[p] = session_key[i]
    session_pkt = td.encrypt_ecb(td.make_sn_key(serial), bytes(s))

    hdr = struct.pack('<IIIHHH', 2, region_size, 4, len(payload), f10, f12) + b'\x00\x00'
    assert len(hdr) == 0x16, len(hdr)
    out = bytearray()
    out += hdr
    out += session_pkt.ljust(0xB8, b'\x00')[:0xB8]
    out += b'\x00' * (0x1000 - len(out))
    out += payload
    out += b'\x00' * (-len(out) % 0x1000)
    return bytes(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--app', required=True)
    ap.add_argument('--serial', required=True)
    ap.add_argument('--session-key', help='8 байт hex, иначе случайный')
    ap.add_argument('-o', '--out', default='DOWNLOAD.bin')
    args = ap.parse_args()

    app = open(args.app, 'rb').read()
    serial = args.serial.encode()
    if args.session_key:
        sk = bytes.fromhex(args.session_key)
    else:
        import secrets
        sk = secrets.token_bytes(8)

    print('ВНИМАНИЕ: формат сессионной строки и подписи не полностью известен —')
    print('результат не пройдёт верификацию RSA на стоковом бутлоадере.')
    print('См. докstring этого файла и PROGRESS.md.')
    data = build_download(app, sk, serial)
    open(args.out, 'wb').write(data)
    print(f'записано {args.out} ({len(data)} байт), сессионный ключ: {sk.hex()}')


if __name__ == '__main__':
    main()
