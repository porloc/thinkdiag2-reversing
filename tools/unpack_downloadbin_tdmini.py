#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
unpack_downloadbin_tdmini.py — алгоритм бутлоадера Thinkdiag Mini (LAUNCH),
полная реконструкция из реверса new_dump/Project thinkdiagmini.bin.

Поколение: НОВОЕ (бутлоадер V1.23.004 — код ОТЛИЧАЕТСЯ от TD2 V1.23.004!,
STM32, флеш 0x08000000, криптография — В СМАРТ-КАРТЕ по ISO 7816).

===========================================================================
 АЛГОРИТМ БУТЛОАДЕРА TDMini (реконструкция, все адреса — флеш мини)
===========================================================================

Транспорт: USB-CDC, команды [u16 cmd][u16 subcmd]... (диспетчер 0x0800CDE2).

1) ПРИЁМ ИМЕНИ ФАЙЛА (0x0800CE86-0x0800CF5E):
   - [1Б][BE16 len<0x21]["DOWNLOAD.BIN"][BE32 размер <= 0x53000]
   - erase(0x08010000, размер)                 (0x0800D350)
   - byte[0x200022CC] = 1                       (флаг «ждём заголовок»)

2) AUTH-ХЕНДШЕЙК (0x0800CD8C):
   - приём 16Б от хоста (буфер отбрасывается)
   - токен устройства = 16Б из флеша 0x0800F000 (0x0800676C:
     если все 0xFF — стёрт); В ДАМПЕ: 16 нулей (00 x 16)
   - хосту отправляется токен, либо (если стёрт) дефолт 00 01 02 .. 0f
     (константа @0x0800EADC)

3) ПЕРВЫЙ ПАКЕТ ДАННЫХ = ЗАГОЛОВОК ФАЙЛА, ровно 0x1000Б (0x080075DC):
   TLV-парсер заголовка (все проверки из кода):
     LE16 @0x00 == 2                    версия формата
     LE32 @0x02 == 0
     LE16 @0x06 == 8
     LE32 @0x08 == 4
     LE32 @0x0C == размер payload, КРАТЕН 16
     записи {LE16 type, LE32 len, data}:
       type=3, len=0x71 (113Б) — зашифрованный сессионный пакет
       type=5, len=0x40 (64Б)  — подпись/МАС  -> memcpy в RAM 0x20013800
       type=7, len=0           — терминатор
     глобально: [0x20013854] = размер payload, [0x20013858] = счётчик 0

4) СЕССИОННЫЙ БЛОБ -> СМАРТ-КАРТА (0x08009D22 -> 0x0800AD22 -> 0x08003CA4):
   APDU: CLA=F0 INS=99 P1=00 P2=00 | данные: <SER_CON u16BE><DEV_CON u16BE>
         <113Б блоба>; обмен через 0x080032A2, статус 0x9000 = OK.
   SER_CON/DEV_CON — u16 из конфига связи (лукап строк "SER CON"/"DEV CON",
   0x08009A82, значения по смещениям +0x2B/+0x3B таблицы [obj+0x1358]).
   КАРТА расшифровывает блоб внутренним ключом и возвращает сессионные
   данные (вероятно AES-ключ сессии). КЛЮЧИ КАРТЫ В ПРОШИВКЕ ОТСУТСТВУЮТ.

5) ЦИКЛ ДАННЫХ (0x0800CFE4 -> 0x08007AB6 -> 0x08009DC6 -> 0x0800AD66 ->
   0x08003D4C):
   - пакет = [1Б][BE32 offset файла][BE16 len][данные], данные по 0x1000Б
   - смещение флеша = 0x08010000 + (file_offset - 0x1000)  — заголовок
     НЕ пишется во флеш
   - КАРТА: APDU CLA=F0 INS=99 P1=01 P2=<mode> <данные>; mode=1 обычный
     пакет, mode=2 ПОСЛЕДНИЙ (длина последнего = payload % 0x1000,
     в V12.05 = 0x10). Расшифровка 16-байтовыми блоками (AES-128) В КАРТЕ,
     ответ карты пишется во флеш (0x0800D3C4).
   - число пакетов = ceil(payload_len / 0x1000)

6) ФИНАЛ (0x0800D17E -> 0x08007BB2 -> 0x08009FFC):
   64Б запись type=5 -> карта (верификация подписи/МАС),
   затем MD5 + RSA-1753 образа (таблица N @0x0800DC4C, 220Б, e=65537 —
   ДРУГОЙ ключ, чем у TD2).

ЗАКЛЮЧЕНИЕ ПО КРИПТОСТОЙКОСТИ:
   Формат V12.05 (TLV-заголовок + 16-байтовая блочность payload + пары
   ABAB в шифротексте) полностью объясняется: AES-ECB В СМАРТ-КАРТЕ.
   Брутфорс 10^8 8-цифровых DES-ключей в прошлой сессии не дал результата
   потому, что шифр вовсе не DES и ключ не 8 цифр — ключи генерируются
   сервером и расшифровываются ТОЛЬКО картой конкретного устройства.
   ДЕШИФРОВКА ОФЛАЙН НЕВОЗМОЖНА без:
     а) живого устройства с картой (replay APDU через UART-сниффер), или
     б) извлечения ключей из смарт-карты (атака на карту), или
     в) ключей с сервера Thinkcar.

Использование:
  python3 unpack_downloadbin_tdmini.py DOWNLOAD.bin [--sn 989149606406]
      [--try-keys]   — офлайн-попытки всеми известными ключами (DES/AES)
      [--apdu out]   — записать APDU-команды для replay на живую карту
"""
import argparse
import os
import sys
import struct

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

# ---------------------------------------------------------------------------
# Константы из реверса мини
# ---------------------------------------------------------------------------
BOOT_BASE = 0x08000000
APP_FLASH = 0x08010000            # регион приложения (мини пишет СЮДА)
MAX_IMAGE = 0x53000               # максимум из протокола
HEADER_LEN = 0x1000               # заголовок файла (первый пакет данных)
AUTH_TOKEN_FLASH = 0x0800F000     # 16Б токен устройства
AUTH_DEFAULT = bytes(range(16))   # 00 01 02 .. 0f @0x0800EADC
SIG_RAM = 0x20013800              # 64Б запись type=5 -> сюда
PAYLOAD_LEN_RAM = 0x20013854
COUNTER_RAM = 0x20013858
RSA_TABLE = 0x0800DC4C            # мастер-таблица RSA-1753 мини

# Ключи, извлечённые из дампов (для офлайн-попыток)
MINI_SN = b"989149606406"         # конфиг мини @0x0800FC00 (тег 0x0D)
FOLDER_SN = b"989149735933"       # имя папки OTA-архива V12.05
TD2_SN_KEY = b"30808430"          # серийный ключ дампнутого TD2
TD2_CHUNK_KEY = b"92584457"       # чанковый ключ стейджинга TD2


def make_sn_key(sn: bytes) -> bytes:
    """Серийный ключ по формуле TD2: SN[4:8] + SN[2:6] (для офлайн-попыток)."""
    return sn[4:8] + sn[2:6]


# ---------------------------------------------------------------------------
# TLV-заголовок (точная семантика парсера 0x080075DC)
# ---------------------------------------------------------------------------
def parse_header(data: bytes):
    """Воспроизводит ВСЕ проверки TLV-парсера мини 0x080075DC.

    Возвращает dict с полями заголовка и записями. Бросает ValueError
    при несовпадении (как бутлоадер возвращает 0xB0000002).
    """
    if len(data) < HEADER_LEN:
        raise ValueError(f"заголовок короче 0x1000: {len(data):#x}")
    ok = lambda cond, msg: (_ for _ in ()).throw(ValueError(msg)) if not cond else None
    ver = struct.unpack_from("<H", data, 0)[0]
    ok(ver == 2, f"LE16@0 = {ver} != 2 (версия формата)")
    f2 = struct.unpack_from("<I", data, 2)[0]
    ok(f2 == 0, f"LE32@2 = {f2:#x} != 0")
    f6 = struct.unpack_from("<H", data, 6)[0]
    ok(f6 == 8, f"LE16@6 = {f6:#x} != 8")
    f8 = struct.unpack_from("<I", data, 8)[0]
    ok(f8 == 4, f"LE32@8 = {f8:#x} != 4")
    plen = struct.unpack_from("<I", data, 0xC)[0]
    ok(plen == 0 or (plen & 0xF) == 0, f"LE32@0xC = {plen:#x} не кратен 16")
    off = 0x10
    records = []
    while off < HEADER_LEN:
        t = struct.unpack_from("<H", data, off)[0]
        if t == 0:
            break
        ln = struct.unpack_from("<I", data, off + 2)[0]
        rec = {"type": t, "len": ln, "data_off": off + 6, "data": data[off + 6:off + 6 + ln]}
        if t == 3:
            ok(ln == 0x71, f"запись type=3: len={ln:#x} != 0x71")
        elif t == 5:
            ok(ln == 0x40, f"запись type=5: len={ln:#x} != 0x40")
        elif t == 7:
            pass  # терминатор
        else:
            ok(False, f"неизвестный тип записи {t}")
        records.append(rec)
        off += 6 + ln
    rtypes = [r["type"] for r in records]
    ok(rtypes[:1] == [3] or 3 in rtypes, "нет записи type=3 (сессионный блоб)")
    return {"ver": ver, "plen": plen, "records": records, "end": off}


# ---------------------------------------------------------------------------
# Раскладка пакетов протокола приёма
# ---------------------------------------------------------------------------
def packet_layout(plen: int):
    """Число и размеры пакетов данных по алгоритму 0x08007AB6."""
    full, last = divmod(plen, 0x1000)
    pkts = []
    for i in range(full):
        pkts.append({"idx": i, "file_off": HEADER_LEN + i * 0x1000,
                     "len": 0x1000, "mode": 1})
    if last:
        pkts.append({"idx": full, "file_off": HEADER_LEN + full * 0x1000,
                     "len": last, "mode": 2})
    return pkts


# ---------------------------------------------------------------------------
# APDU-строитель (для replay на живую карту через UART)
# ---------------------------------------------------------------------------
def apdu_session(blob: bytes, ser_con: int, dev_con: int) -> bytes:
    """APDU сессионного блоба (0x08003CA4): F0 99 00 00 + SER + DEV + блоб."""
    return (bytes([0xF0, 0x99, 0x00, 0x00])
            + struct.pack(">H", ser_con) + struct.pack(">H", dev_con) + blob)


def apdu_payload(data: bytes, mode: int) -> bytes:
    """APDU пакета payload (0x08003D4C): F0 99 01 <mode> + данные."""
    return bytes([0xF0, 0x99, 0x01, mode]) + data


# ---------------------------------------------------------------------------
# Офлайн-попытки расшифровки (все ключи из дампов)
# ---------------------------------------------------------------------------
def try_offline(data: bytes):
    """Пробует все извлечённые из дампов ключи на блоб и payload."""
    from Crypto.Cipher import AES, DES, DES3
    h = parse_header(data)
    rec3 = next(r for r in h["records"] if r["type"] == 3)
    blob = rec3["data"]
    payload = data[HEADER_LEN:HEADER_LEN + h["plen"]]

    # самая частая 16Б-константа payload = зашифрованная «заливка»
    from collections import Counter
    c16 = Counter(payload[i:i + 16] for i in range(0, len(payload) - 15, 16))
    const_block, const_cnt = c16.most_common(1)[0]

    candidates = {
        "auth-ключ мини 000102..0f (флеш 0x0800EADC)": AUTH_DEFAULT,
        "токен устройства мини 00x16 (флеш 0x0800F000)": bytes(16),
        "SN-ключ мини 49609149 + нули": make_sn_key(MINI_SN).ljust(16, b"\x00"),
        "SN-ключ папки 49739149 + нули": make_sn_key(FOLDER_SN).ljust(16, b"\x00"),
        "SN-ключ TD2 30808430 + нули": TD2_SN_KEY.ljust(16, b"\x00"),
        "чанковый TD2 92584457 + нули": TD2_CHUNK_KEY.ljust(16, b"\x00"),
    }

    print(f"  payload: {len(payload):#x} Б, константный блок "
          f"{const_block.hex()} x{const_cnt}")
    print(f"  сессионный блоб (type=3): {len(blob)} Б = 1 + {len(blob)-1}"
          f" (байт 0x{blob[0]:02X} + {len(blob)-1} Б)")

    found = False
    print("\n  -- AES-128-ECB на константном блоке (ожидание: заливка FF/00) --")
    for name, k in candidates.items():
        dec = AES.new(k, AES.MODE_ECB).decrypt(const_block)
        if dec in (b"\xff" * 16, b"\x00" * 16, b"\xaa" * 16) or dec[:8] == dec[8:]:
            print(f"  !! {name}: {const_block.hex()} -> {dec.hex()}")
            found = True
    if not found:
        print("  (ничего не расшифровалось — ключи картой не являются)")

    print("\n  -- AES-128-ECB/CBC(IV=0) на блобе blob[1:] (112Б = 7 блоков) --")
    for name, k in candidates.items():
        for label, dec in (
            ("ECB", AES.new(k, AES.MODE_ECB).decrypt(blob[1:])),
            ("CBC", AES.new(k, AES.MODE_CBC, bytes(16)).decrypt(blob[1:])),
        ):
            pr = sum(1 for b in dec if 32 <= b < 127)
            if pr > 90:
                print(f"  !! {name} {label}: printable {pr}/112: {dec[:48]!r}")
                found = True
    if not found:
        print("  (блоб не расшифровался — зашифрован ключом карты)")

    print("\n  -- DES/3DES (старый алгоритм TD2) на блобе и payload --")
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from td2des_fast import des_ecb_fast
    for name, k in list(candidates.items())[:6]:
        k8 = k[:8]
        dec = des_ecb_fast(blob[1:1 + 104], k8, decrypt=True)
        pr = sum(1 for b in dec if 32 <= b < 127)
        if pr > 80:
            print(f"  !! {name}: printable {pr}")
            found = True
    if not found:
        print("  (не DES — ожидаемо, в мини DES-таблицы не используются кодом)")

    return found


# ---------------------------------------------------------------------------
# Главная
# ---------------------------------------------------------------------------
def main():
    ap = argparse.ArgumentParser(
        description="Распаковка OTA-файла DOWNLOAD.BIN Thinkdiag Mini (новое поколение)",
        formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("input", help="DOWNLOAD.bin нового формата (TLV-заголовок 0x1000)")
    ap.add_argument("--try-keys", action="store_true",
                    help="офлайн-попытки всеми ключами из дампов")
    ap.add_argument("--apdu", metavar="FILE",
                    help="записать APDU-последовательность для replay на карту")
    ap.add_argument("-o", "--out", help="выходной файл (payload расшифрованный, если получится)")
    args = ap.parse_args()

    data = open(args.input, "rb").read()
    print(f"=== {args.input}: {len(data)} (0x{len(data):X}) байт ===")

    # 1. Заголовок — все проверки парсера бутлоадера мини
    try:
        h = parse_header(data)
    except ValueError as e:
        raise SystemExit(f"заголовок НЕ соответствует формату мини: {e}")
    print(f"  заголовок TLV: версия={h['ver']}, payload={h['plen']} (0x{h['plen']:X}) "
          f"— все проверки парсера 0x080075DC ПРОЙДЕНЫ")
    for r in h["records"]:
        d = r["data"]
        prev = d[:24].hex() + ("..." if len(d) > 24 else "")
        print(f"    запись type={r['type']} len={r['len']} (0x{r['len']:X}): {prev}")
    print(f"  конец записей: 0x{h['end']:X}, дальше нули до 0x1000: "
          f"{data[h['end']:HEADER_LEN] == bytes(HEADER_LEN - h['end'])}")

    # 2. Раскладка пакетов
    pkts = packet_layout(h["plen"])
    print(f"\n  протокол приёма: {len(pkts)} пакетов данных по 0x1000Б "
          f"(последний: {pkts[-1]['len']:#X}Б, mode={pkts[-1]['mode']}); "
          f"флеш-адрес = 0x{APP_FLASH:08X} + (file_offset - 0x1000)")
    print(f"  верификация: запись type=5 (64Б) -> карта (0x08009FFC), затем "
          f"MD5+RSA-1753 (N @0x{RSA_TABLE:08X})")

    # 3. AUTH-токен устройства
    print(f"\n  auth-токен устройства: флеш 0x{AUTH_TOKEN_FLASH:08X} "
          f"(в дампе мини: {'00 x 16 (записан нулями)'}); "
          f"дефолт если стёрт: {AUTH_DEFAULT.hex()}")

    # 4. Офлайн-попытки
    if args.try_keys:
        print("\n=== Офлайн-попытки расшифровки ===")
        found = try_offline(data)
        print("\n  ВЫВОД: ключи шифрования находятся в смарт-карте устройства "
              "(APDU F0 99 ...), офлайн-расшифровка невозможна." if not found else
              "\n  !! найден рабочий ключ — применяйте его к payload")

    # 5. APDU для replay
    if args.apdu:
        rec3 = next(r for r in h["records"] if r["type"] == 3)
        with open(args.apdu, "wb") as f:
            f.write(b"#APDU-REPLAY thinkdiag mini OTA (see unpack_downloadbin_tdmini.py)\n")
            f.write(b"#1 session: F0 99 00 00 <SER_CON> <DEV_CON> <blob113>\n")
            f.write(apdu_session(rec3["data"], 0, 0))
            f.write(b"\n#2..N payload: F0 99 01 <mode> <4096B>\n")
            for p in pkts:
                f.write(apdu_payload(data[p["file_off"]:p["file_off"] + p["len"]], p["mode"]))
        print(f"\n  APDU-последовательность для replay на живую карту записана: {args.apdu}")
        print("  (SER_CON/DEV_CON уточняются из конфига связи живого устройства)")

    # 6. Извлечение компонентов
    outdir = "download_unpacked_mini"
    os.makedirs(outdir, exist_ok=True)
    rec3 = next(r for r in h["records"] if r["type"] == 3)
    open(os.path.join(outdir, "session_blob.bin"), "wb").write(rec3["data"])
    rec5 = next((r for r in h["records"] if r["type"] == 5), None)
    if rec5:
        open(os.path.join(outdir, "signature64.bin"), "wb").write(rec5["data"])
    payload = data[HEADER_LEN:HEADER_LEN + h["plen"]]
    open(os.path.join(outdir, "payload_encrypted.bin"), "wb").write(payload)
    print(f"\n  компоненты сохранены в {outdir}/: session_blob.bin "
          f"({len(rec3['data'])}Б)" + (f", signature64.bin (64Б)" if rec5 else "") +
          f", payload_encrypted.bin ({len(payload)}Б)")


if __name__ == "__main__":
    main()
