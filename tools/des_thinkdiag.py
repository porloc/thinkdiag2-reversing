#!/usr/bin/env python3
"""
DES-реализация Thinkdiag 2 (точная реконструкция из бутлоадера V1.22/V1.23).

Особенность: бутлоадер распаковывает биты LSB-first (младший бит байта первым),
а таблицы — канонические DES. Это эквивалентно стандартному DES с реверсом
бит в каждом байте входа, ключа и выхода.

Подтверждено реверсом (TD2.bin):
  IP  @0x40DFE4 (58,50,42,...)  — стандартный
  FP  @0x40E024 (40,8,48,...)   — стандартный IP^-1
  S1-S8 @0x40DC30               — стандартные
  E   @0x40E0DC, P @0x40E180, PC-1 @0x40E0A4, PC-2 @0x40E10C, сдвиги @0x40E1F1
  Раунды: 16, Feistel, состояние = 64 бит-ячейки
  Двойной режим (ключ >= 9 байт): 3DES-EDE (K1=K3, K2) —
    шифрование = E_A(D_B(E_A(P))), расшифровка = D_A(E_B(D_A(C)))
"""
from Crypto.Cipher import DES, DES3


def bitrev8(data: bytes) -> bytes:
    return bytes(int(f'{b:08b}'[::-1], 2) for b in data)


def td2_des_encrypt(key8: bytes, block8: bytes) -> bytes:
    """DES-шифрование в реализации Thinkdiag (LSB-first биты)."""
    c = DES.new(bitrev8(key8), DES.MODE_ECB)
    return bitrev8(c.encrypt(bitrev8(block8)))


def td2_des_decrypt(key8: bytes, block8: bytes) -> bytes:
    c = DES.new(bitrev8(key8), DES.MODE_ECB)
    return bitrev8(c.decrypt(bitrev8(block8)))


def td2_3des_ede_encrypt(k1: bytes, k2: bytes, block8: bytes) -> bytes:
    """3DES-EDE как в 'двойном' режиме бутлоадера: E_A(D_B(E_A(P)))."""
    a = bitrev8(k1)
    b = bitrev8(k2)
    x = bitrev8(block8)
    x = DES.new(a, DES.MODE_ECB).encrypt(x)
    x = DES.new(b, DES.MODE_ECB).decrypt(x)
    x = DES.new(a, DES.MODE_ECB).encrypt(x)
    return bitrev8(x)


def td2_3des_ede_decrypt(k1: bytes, k2: bytes, block8: bytes) -> bytes:
    a = bitrev8(k1)
    b = bitrev8(k2)
    x = bitrev8(block8)
    x = DES.new(a, DES.MODE_ECB).decrypt(x)
    x = DES.new(b, DES.MODE_ECB).encrypt(x)
    x = DES.new(a, DES.MODE_ECB).decrypt(x)
    return bitrev8(x)


def decrypt_ecb(key8: bytes, data: bytes) -> bytes:
    """Транспортная расшифровка (режим одиночного DES, ECB, выравнивание ~7)."""
    n = (len(data) // 8) * 8
    out = bytearray()
    c = DES.new(bitrev8(key8), DES.MODE_ECB)
    for i in range(0, n, 8):
        out += bitrev8(c.decrypt(bitrev8(data[i:i + 8])))
    return bytes(out) + data[n:]


def encrypt_ecb(key8: bytes, data: bytes) -> bytes:
    n = (len(data) // 8) * 8
    out = bytearray()
    c = DES.new(bitrev8(key8), DES.MODE_ECB)
    for i in range(0, n, 8):
        out += bitrev8(c.encrypt(bitrev8(data[i:i + 8])))
    return bytes(out) + data[n:]


def make_sn_key(sn: bytes) -> bytes:
    """Ключ сессионного пакета: strcat("0", SN[2:6]) -> 8 байт с нулями.

    Восстановлено из TD2 0x409106-0x409142:
      buf = "0\\0..." (8 байт из флеша @0x40E30C)
      buf += SN[2:6]  (strcat, max 4, до нулевого байта)
    """
    buf = bytearray(b'0' + b'\x00' * 7)
    src = sn[2:6]
    pos = buf.index(0)
    for ch in src:
        if ch == 0 or pos >= 8:
            break
        buf[pos] = ch
        pos += 1
    return bytes(buf)


def extract_session_key(session_string: bytes) -> bytes:
    """Сессионный ключ DATA-пакетов из расшифрованной сессионной строки.

    Восстановлено из TD2 0x4091B0-0x4091EE: ключ = байты строки
    на позициях 0, 1, 8, 9, 10, 11, 16, 17.
    """
    pos = [0, 1, 8, 9, 10, 11, 16, 17]
    return bytes(session_string[p] for p in pos)


if __name__ == '__main__':
    # самопроверка: roundtrip
    k = make_sn_key(b'989149735933')
    assert k == b'09149\x00\x00\x00', k
    p = b'\x11\x22\x33\x44\x55\x66\x77\x88'
    c = td2_des_encrypt(k, p)
    assert td2_des_decrypt(k, c) == p
    c3 = td2_3des_ede_encrypt(k, b'12345678', p)
    assert td2_3des_ede_decrypt(k, b'12345678', c3) == p
    d = encrypt_ecb(k, p * 3)
    assert decrypt_ecb(k, d) == p * 3
    print('Все самопроверки пройдены')
    print('Ключ для SN 989149735933:', make_sn_key(b'989149735933'))
