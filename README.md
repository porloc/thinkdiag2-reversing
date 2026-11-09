# Thinkdiag 2 — Reverse Engineering

Реверс-инжиниринг OTA-обновлений диагностических адаптеров **Thinkcar Thinkdiag 2 / DB7 / ThinkDiag Mini / XDiag DBSCarIII**.

## Документация

| Документ | Содержимое |
|---|---|
| **BOOTLOADERS.md** | ⭐ Алгоритмы работы ВСЕХ бутлоадеров (TD2/DB7/TDMini/XDiag/ADS): старт, командный протокол, OTA, крипто, верификация, запуск приложения |
| PROGRESS.md | Журнал всех сессий реверса (этапы 1–35) |
| ANALYSIS_REPORT.md | Сессия 5+8: шифр DOWNLOAD.BIN, контейнер TLV, крипто-пути всех устройств |
| **OTA_FORMAT.md** | ⭐ Сессия 8 (EN): полный формат контейнера DOWNLOAD.BIN, SE-архитектура, семейство шифров, схемы OTA TD2/DB7 |

## Результаты

| Компонент | Статус |
|---|---|
| Карта флеша, трейлеры регионов (TD2/DB7) | ✅ полностью |
| OTA-протокол бутлоадера (USB-CDC, ASCII-команды + cmd 0x0D) | ✅ полностью |
| Транспортный шифр = **DES** (LSB-first) / 3DES-EDE | ✅ полностью |
| Верификация = **MD5 + RSA-1753** (PKCS#1 v1.5) | ✅ полностью |
| **Каскад загрузки DB7** (self-verify → boot-manager → app) | ✅ Сессия 6 |
| **Запуск приложения** (launch/boot_check, backup-регистры) | ✅ Сессия 6 |
| Алгоритм LAUNCH → `unpack_downloadbin_td2.py` | ✅ **0 отличий на дампе** |
| Реверс бутлоадера TDMini (смарт-карта, APDU F0 99) | ✅ Сессия 3 |
| Шифр DOWNLOAD.BIN V12.05 = кастомный 2-раундовый AES (tdmini app) | ✅ Сессия 5 |
| Пиратский ADS-бут: AES+ARX шифр, статические ключи | ✅ Сессия 4 |
| Контейнер DOWNLOAD.BIN (TLV 2/8/3/5/7, payload @0x1000) | ✅ Сессия 8 |
| Расшифровка DOWNLOAD.bin V12.05 офлайн | ❌ **исключена**: ключ в SE целевого устройства (989149735933), исчерпывающий перебор (Сессия 8) |
| OTA TD2 = DES-поле → таблица EEPROM → 3DES + кастомный AES | ✅ Сессия 8 |
| OTA DB7 = открытый текст + MD5 | ✅ Сессия 8 |

## Платформы
- **TD2/DB7**: Microchip ATSAME70Q20A (Cortex-M7, 1MB flash @0x00400000), IAR, USB CDC
- **TDMini/XDiag**: STM32/GD32 (флеш @0x08000000); XDiag = GD32F403RK
- **ADS (пиратский)**: STM32F1

## Два поколения бутлоадеров

| | TD2/DB7 (старое) | TDMini (новое) |
|---|---|---|
| Заголовок файла | нет (чанки сразу) | TLV 0x1000Б (ver=2) |
| Запись | стейджинг 0x440000 → запуск | прямо 0x08010000 |
| Шифр payload | софтверный DES (LSB-first) | AES-128 в смарт-карте (APDU F0 99) |
| Ключ чанков | SN-ключ + мастер-таблица | сессионный блоб → карта |
| RSA-1753 | TD2: N @0x40D828/0x40DA2C; DB7: +J2534 @0x40C594 | N @0x0800DC4C (другой) |
| Офлайн-расшифровка | ✅ (скрипт, 0 отличий) | ⚠️ см. ANALYSIS_REPORT.md |

## Инструменты
```bash
# Распаковка стокового дампа (.mot → компоненты)
python3 tools/unpack_firmware.py "original TD2.mot" -o unpacked

# Сборка образа для программатора (J-Flash/CH341A/RT809H через SWD)
python3 tools/pack_flash.py --boot unpacked/bootloader.bin \
    --app my_modified_app.bin --trailer unpacked/app_trailer.bin \
    --config unpacked/config_420000.bin -o flash_image

# ПОЛНЫЙ алгоритм LAUNCH бутлоадера TD2 (самопроверка: 0 отличий)
python3 tools/unpack_downloadbin_td2.py --dump fw_extract/TD2.bin

# Алгоритм мини-поколения (TLV + APDU-replay для живой карты)
python3 tools/unpack_downloadbin_tdmini.py DOWNLOAD.bin --apdu replay.bin

# Пиратский ADS-бут: decode/encode кастомного AES+ARX
python3 tools/unpack_downloadbin_ads.py

# DES бутлоадера (LSB-first = bit-reversed DES)
python3 tools/des_thinkdiag.py
```

## Важно про подпись и кастомные прошивки
- RSA проверяется ТОЛЬКО после OTA-приёма; **при загрузке приложения — нет**
  (TD2: boot_check не верифицирует образ; DB7: self-verify только СВОЕГО региона)
- **При заливке внешним программатором подпись не проверяется** — pack_flash.py
- Для приёма кастомных OTA стоковым бутлоадером — патч вызова verify
  (DB7: 0x40A0B0 → NOP) + пересборка образа

## Ghidra (Сессия 6)
```bash
export JAVA_HOME=/usr/lib/jvm/java-21-openjdk-amd64
$GHIDRA/support/analyzeHeadless <proj> <name> -import boot.bin \
  -processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 00400000 \
  -scriptPath ghidra_scripts -preScript MarkEntries.py "ADDRS" \
  -postScript DumpDecomp.py out.c -deleteProject
```
Скрипты в `ghidra_scripts/`: MarkEntries.py (вектора+сиды), DumpDecomp.py
(декомпиляция), FindXrefs.py (ссылки). Подробности и патч launch.sh —
BOOTLOADERS.md §8.

## Что нужно для полной расшифровки V12.05
1. Повторная загрузка tdmini-дампа (ID `1xHe0q9g…` обрезан) → пересборка
   decrypt_tool.py (Сессия 5, шифр уже реверсирован)
2. ИЛИ живое устройство мини-поколения: UART-сниффер к смарт-карте + APDU-replay
