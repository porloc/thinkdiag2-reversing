#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
unpack_downloadbin_td2.py — алгоритм бутлоадера Thinkdiag 2 (LAUNCH), полная реконструкция.

Поколение: СТАРОЕ (бутлоадер V1.22.004 / V1.23.004, ATSAME70Q20A, софтверный DES).
Проверено на дампе TD2: распаковка застейженного OTA-файла @0x440000 ->
приложение @0x4A0000, 0 отличий (380 чанков, 389120 байт).

===========================================================================
 АЛГОРИТМ БУТЛОАДЕРА (реконструкция из реверса, см. PROGRESS.md)
===========================================================================

Транспорт: USB-CDC, пакеты [cmd u16][u16 BE длина][данные], cmd = 0x0D.

1) ПРИЁМ ФАЙЛА (диспетчер 0x408D4C):
   - 1-й пакет: "DOWNLOAD.BIN" (13Б, plaintext) + BE32 размер образа (<= 0x5F800)
   - erase(0x440000); ДАННЫЕ ФАЙЛА ПИШУТСЯ В СТЕЙДЖИНГ 0x440000 КАК ЕСТЬ
     (raw-путь 0x408F60-0x409006 — без расшифровки)

2) СЕССИЯ (0x409086-0x40915C):
   - приём 13Б серийника от хоста
   - SN-КЛЮЧ = SN[4:8] + SN[2:6]           (8 ASCII цифр; код 0x409106-0x409142:
     buf = "0\0\0\0\0\0\0\0" (флеш 0x40E30C); memcpy(buf, SN+4, 4);
     strncat(buf, SN+2, 4))
   - сессионный пакет расшифровывается DES-ом со SN-ключом
   - парсинг по запятым (0x2C); СЕССИОННЫЙ КЛЮЧ = байты строки
     [0,1, 8,9,10,11, 16,17] (код 0x4091B0-0x4091EE)
   - erase(0x4A0000)

3) ЦИКЛ ДАННЫХ (0x4092E0):
   - 0x4072B0(dst, buf, len, sess_key, 8, decrypt) — DES-расшифровка
   - 0x4078EA(флеш, dst, len) — запись расшифрованного в 0x4A0000

4) LAUNCH застейженного файла (формат файла = формат стейджинга):
   ПОТОК ЧАНКОВ:
     [BE16 len <= 0x400][u8 trailer_len][зашифрованные данные (len Б)] * N
   ХВОСТ (трейлер):
     [08][8Б DES(SNKEY) селектор][05]["1,3,30"][00]["Launch_Limited_ED"][CRC16]
   - селектор расшифровывается SN-ключом -> "i0,i1,i2" (например "2,5,14")
   - индексы в мастер-таблицу: (i0-1, i1-1, i2-1)
   - МАСТЕР-ТАБЛИЦА = конфиг-записи 10..15 (6 x 32Б = 24 DES-ключа по 8 цифр,
     читаются через конфиг-ФС: 0x40510E -> 0x40826C(area=2, rec=10..15) ->
     0x40A4A0 -> 0x40994C; в дампе внутреннего флеша ОТСУТСТВУЕТ — хранится
     в конфиг-области, недоступной из этого дампа)
   - КЛЮЧ ЧАНКОВ = master[i0-1][0:2] + master[i1-1][0:4] + master[i2-1][0:2]
     (те же байты, что позиции 0,1,8,9,10,11,16,17 сессионной строки)
   - каждый чанк: DES-ECB ( LSB-first вариант Thinkdiag ), из расшифрованного
     отбрасываются последние trailer_len байт; поток = образ приложения

5) ВЕРИФИКАЦИЯ (0x40A0B0): MD5 образа по 16Б-кускам + RSA-1753 PKCS#1 v1.5,
   токен = [SN 13Б][0x05][u32][MD5 16Б]; N/e из мастер-таблицы RSA в бутлоадере.

КЛЮЧИ ДАМПННОГО УСТРОЙСТВА TD2 (найдены в прошлых сессиях, брутфорс brute_des2):
   SN-ключ    = "30808430"  (серийник ??843080????)
   ключ чанков = "92584457" (селектор "2,5,14" -> индексы 1,4,13)

DES-СПЕЦИФИКА THINKDIAG (td2des_fast.py):
   канонические таблицы, но биты распаковываются LSB-first -> эквивалент
   стандартного DES с реверсом бит в каждом байте входа/ключа/выхода.

Использование:
  python3 unpack_downloadbin_td2.py DOWNLOAD.bin --sn 989149735933 [--key 8цифр]
  python3 unpack_downloadbin_td2.py --dump fw_extract/TD2.bin        # самопроверка на дампе
  python3 unpack_downloadbin_td2.py DOWNLOAD.bin --master master.bin # вывод ключа из таблицы

Выход: распакованный образ приложения (вектора в начале) + проверка CRC16 трейлера.
"""
import argparse
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from td2des_fast import des_ecb_fast

# ---------------------------------------------------------------------------
# Константы алгоритма (из реверса бутлоадера)
# ---------------------------------------------------------------------------
STAGING_FLASH = 0x440000          # стейджинг-область
STAGING_OFF = 0x40000             # file-offset внутри дампа (флеш с 0x400000)
STAGING_MAX = 0x60000
APP_FLASH = 0x4A0000              # регион приложения
APP_OFF = 0xA0000
MAX_IMAGE = 0x5F800               # макс. размер образа из протокола
CHUNK_MAX = 0x400                 # макс. длина чанка
PRODUCT_NAME = b"Launch_Limited_ED"

# Ключи дампнутого устройства (брутфорс, верифицированы на дампе)
KNOWN_SN_KEY = b"30808430"
KNOWN_CHUNK_KEY = b"92584457"


# ---------------------------------------------------------------------------
# Ключевые материалы
# ---------------------------------------------------------------------------
def make_sn_key(sn: bytes) -> bytes:
    """SN-ключ сессионного пакета: SN[4:8] + SN[2:6] (8 ASCII цифр).

    Реконструкция TD2 0x409106-0x409142:
      buf[8] = "0\\0..." (шаблон из флеша 0x40E30C)
      memcpy(buf, SN+4, 4)   -> buf = SN[4:8]
      strncat(buf, SN+2, 4)  -> buf = SN[4:8] + SN[2:6]
    """
    if len(sn) < 8:
        raise ValueError("серийник короче 8 символов")
    return sn[4:8] + sn[2:6]


def chunk_key_from_master(master: bytes, i0: int, i1: int, i2: int) -> bytes:
    """Ключ чанков из мастер-таблицы (конфиг-записи 10-15).

    master = 192Б (24 x 8-цифровых ключей). Селектор "a,b,c" ->
    индексы (a-1, b-1, c-1); ключ = m[a-1][0:2] + m[b-1][0:4] + m[c-1][0:2].
    """
    if len(master) < 192:
        raise ValueError("мастер-таблица < 192 байт")
    k = (master[(i0 - 1) * 8:(i0 - 1) * 8 + 2]
         + master[(i1 - 1) * 8:(i1 - 1) * 8 + 4]
         + master[(i2 - 1) * 8:(i2 - 1) * 8 + 2])
    return k


# ---------------------------------------------------------------------------
# CRC16 трейлера
# ---------------------------------------------------------------------------
def crc16(data: bytes, poly: int = 0x1021, init: int = 0xFFFF) -> int:
    """CRC16-CCITT/FALSE — вариант, дающий совпадение на трейлере дампа."""
    crc = init
    for b in data:
        crc ^= b << 8
        for _ in range(8):
            crc = ((crc << 1) ^ poly) & 0xFFFF if crc & 0x8000 else (crc << 1) & 0xFFFF
    return crc


# ---------------------------------------------------------------------------
# Разбор файла / стейджинга
# ---------------------------------------------------------------------------
def find_trailer(buf: bytes):
    """Ищет трейлер в конце данных.

    Точная раскладка (по байтам дампа TD2):
      [08][8Б DES(SNKEY) селектор][05]["1,2,3" 5Б][00][0F]["Launch_Limited_ED" 17Б][CRC16 2Б]
    Возвращает (sel_off, data_end) — sel_off указывает на байт [08],
    data_end — за CRC16. Если имени нет — (None, len(buf)).
    """
    idx = buf.find(PRODUCT_NAME)
    if idx < 0:
        return None, len(buf)
    end = idx + len(PRODUCT_NAME) + 2          # имя + CRC16
    sel_off = idx - 17                           # [08] перед [селектор 8Б][05]["1,2,3"][00][0F]
    if sel_off < 0 or buf[sel_off] != 0x08:
        sel_off = None
    return sel_off, end


def decrypt_selector(sel8: bytes, sn_key: bytes) -> str:
    """Расшифровка 8-байтового селектора SN-ключом -> строка "i0,i1,i2"."""
    dec = des_ecb_fast(sel8, sn_key, decrypt=True)
    return dec.split(b"\x00")[0].decode("ascii", errors="replace")


def parse_selector(text: str):
    vals = [int(x) for x in text.split(",") if x.strip()]
    if len(vals) < 3:
        raise ValueError(f"селектор '{text}' содержит < 3 чисел")
    return vals[0], vals[1], vals[2]


def unpack_stream(buf: bytes, chunk_key: bytes, verbose=True):
    """Главный цикл LAUNCH: чанки [BE16 len][u8 trailer][data] -> образ."""
    sel_off, end = find_trailer(buf)
    if verbose:
        print(f"  трейлер: имя@{hex(sel_off) if sel_off else '-'}, данные до 0x{end:X}")
    out = bytearray()
    off = 0
    nch = 0
    while off < end - 3:
        ln = (buf[off] << 8) | buf[off + 1]
        tr = buf[off + 2]
        if ln == 0 or ln > CHUNK_MAX:
            if verbose:
                print(f"  ход чанков остановлен @0x{off:X} (len=0x{ln:X}) — конец данных")
            break
        data = buf[off + 3:off + 3 + ln]
        dec = des_ecb_fast(data, chunk_key, decrypt=True)
        out += dec[:ln - tr]
        off += 3 + ln
        nch += 1
    if verbose:
        print(f"  чанков: {nch}, расшифровано: {len(out)} (0x{len(out):X}) байт")
    return bytes(out), (sel_off, end)


# ---------------------------------------------------------------------------
# Полный разбор DOWNLOAD.bin старого формата
# ---------------------------------------------------------------------------
def unpack_downloadbin(path: str, sn: bytes = None, chunk_key: bytes = None,
                       master: bytes = None, out_path: str = None):
    data = open(path, "rb").read()
    print(f"=== {path}: {len(data)} (0x{len(data):X}) байт ===")

    buf = data
    if len(buf) > STAGING_MAX:
        print(f"  предупреждение: файл больше стейджинга 0x{STAGING_MAX:X}")

    # 1. Трейлер и селектор
    sel_off, end = find_trailer(buf)
    selector = None
    if sel_off is not None and buf[sel_off] == 0x08:
        sel8 = buf[sel_off + 1:sel_off + 9]
        print(f"  селектор (зашифр.): {sel8.hex()}")
        if sn:
            sn_key = make_sn_key(sn)
            selector = decrypt_selector(sel8, sn_key)
            print(f"  SN-ключ: {sn_key.decode()} -> селектор: '{selector}'")
        else:
            print("  (серийник не задан — селектор не расшифрован)")

    # 2. Ключ чанков
    if chunk_key is None and selector and master:
        i0, i1, i2 = parse_selector(selector)
        chunk_key = chunk_key_from_master(master, i0, i1, i2)
        print(f"  мастер-таблица: индексы ({i0-1},{i1-1},{i2-1}) -> ключ {chunk_key.decode()}")
    if chunk_key is None:
        chunk_key = KNOWN_CHUNK_KEY
        print(f"  ключ чанков: {chunk_key.decode()} (известный для дампнутого устройства)")
    if len(chunk_key) != 8:
        raise SystemExit("ошибка: ключ чанков должен быть 8 байт")

    # 3. Цикл чанков
    image, _ = unpack_stream(buf, chunk_key)

    # 4. CRC16 трейлера
    if sel_off is not None and end <= len(buf):
        crc_bytes = buf[end - 2:end]
        # CRC считается по данным до CRC включительно или только по образу —
        # пробуем оба (совпадение не гарантировано без верификации бутлоадера)
        for probe_name, probe in (("данные-до-трейлера", buf[:end - 2]),):
            c = crc16(probe)
            if verbose_probe(crc_bytes, c):
                print(f"  CRC16 ({probe_name}): совпал {c:04X}")
                break

    # 5. Выход
    out_path = out_path or os.path.splitext(path)[0] + ".unpacked.bin"
    open(out_path, "wb").write(image)
    print(f"  образ записан: {out_path}")
    print(f"  первые 16Б: {image[:16].hex()}")
    sp = int.from_bytes(image[0:4], "little")
    rv = int.from_bytes(image[4:8], "little")
    if 0x20400000 <= sp < 0x20460000 and 0x400000 <= rv < 0x500000:
        print(f"  векторы: SP=0x{sp:08X}, Reset=0x{rv:08X} — ПОХОЖЕ НА ВАЛИДНОЕ ПРИЛОЖЕНИЕ")
    return image


def verbose_probe(crc_bytes, c):
    return crc_bytes == c.to_bytes(2, "big") or crc_bytes == c.to_bytes(2, "little")


# ---------------------------------------------------------------------------
# Самопроверка на дампе TD2: стейджинг @0x440000 -> приложение @0x4A0000
# ---------------------------------------------------------------------------
def selftest_dump(dump_path: str):
    fw = open(dump_path, "rb").read()
    staged = fw[STAGING_OFF:STAGING_OFF + STAGING_MAX]
    print(f"=== Самопроверка на дампе {dump_path} ===")
    print(f"  стейджинг @0x{STAGING_FLASH:08X} ({STAGING_OFF:#x} в файле)")

    # селектор
    idx = staged.find(PRODUCT_NAME)
    if idx < 0:
        raise SystemExit("имя продукта в стейджинге не найдено — не тот дамп?")
    end = idx + len(PRODUCT_NAME) + 2
    # точная раскладка трейлера (проверена по байтам дампа):
    # [08][8Б селектор][05]["1,2,3"][00][0F]["Launch_Limited_ED"][CRC16]
    assert staged[idx - 17] == 0x08, "структура трейлера изменилась"
    sel8 = staged[idx - 16:idx - 8]
    print(f"  трейлер: [08]{sel8.hex()}[05]" + repr(staged[idx - 7:idx - 2].decode()) +
          f"[00][0F]'{PRODUCT_NAME.decode()}'[CRC16]={staged[end - 2:end].hex()}")
    selector = decrypt_selector(sel8, KNOWN_SN_KEY)
    print(f"  SN-ключ {KNOWN_SN_KEY.decode()} -> селектор '{selector}'")
    i0, i1, i2 = parse_selector(selector)
    print(f"  индексы мастер-таблицы: ({i0-1}, {i1-1}, {i2-1}) "
          f"(ключ = m[{i0-1}][0:2]+m[{i1-1}][0:4]+m[{i2-1}][0:2])")

    image, _ = unpack_stream(staged, KNOWN_CHUNK_KEY)
    app = fw[APP_OFF:APP_OFF + len(image)]
    ok = bytes(image) == app
    print(f"  сравнение с приложением @0x{APP_FLASH:08X}: "
          f"{'СОВПАЛО (0 отличий)' if ok else 'ОТЛИЧИЯ!'}")
    if not ok:
        diff = next(k for k in range(len(image)) if image[k] != app[k])
        print(f"  первое расхождение @0x{diff:X}: {image[diff]:02X} != {app[diff]:02X}")
        raise SystemExit(1)
    out = "td2_staged_unpacked.bin"
    open(out, "wb").write(bytes(image))
    print(f"  образ сохранён: {out} ({len(image)} байт)")
    return True


def main():
    ap = argparse.ArgumentParser(
        description="Распаковка OTA-файла DOWNLOAD.BIN Thinkdiag 2 (старое поколение, софтверный DES)",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__.split("Использование:")[1] if "Использование:" in __doc__ else "")
    ap.add_argument("input", nargs="?", help="DOWNLOAD.bin (старый формат: поток чанков + трейлер)")
    ap.add_argument("--sn", help="серийник целевого устройства (12 цифр)")
    ap.add_argument("--key", help="ключ чанков (8 символов) — если известен/подобран")
    ap.add_argument("--master", help="файл мастер-таблицы (192Б, конфиг-записи 10-15)")
    ap.add_argument("--dump", help="дамп TD2.bin — режим самопроверки алгоритма")
    ap.add_argument("-o", "--out", help="выходной файл образа")
    args = ap.parse_args()

    if args.dump:
        selftest_dump(args.dump)
        return
    if not args.input:
        ap.print_help()
        return

    sn = args.sn.encode() if args.sn else None
    key = args.key.encode() if args.key else None
    master = open(args.master, "rb").read() if args.master else None
    unpack_downloadbin(args.input, sn, key, master, args.out)


if __name__ == "__main__":
    main()
