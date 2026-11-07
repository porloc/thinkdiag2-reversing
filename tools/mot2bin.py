#!/usr/bin/env python3
"""Конвертер S-record (.mot) → бинарный образ флеша Thinkdiag 2."""
import sys

def srec_to_bin(path, base=0x00400000, size=0x100000):
    data = bytearray(size)
    with open(path, 'r', errors='replace') as f:
        for line in f:
            line = line.strip()
            if not line.startswith('S'):
                continue
            t = line[1]
            if t not in '123':
                continue
            count = int(line[2:4], 16)
            if t == '1':
                a, addr, dl = 4, int(line[4:8], 16), (count - 3) * 2
            elif t == '2':
                a, addr, dl = 6, int(line[4:10], 16), (count - 4) * 2
            else:
                a, addr, dl = 8, int(line[4:12], 16), (count - 5) * 2
            raw = bytes.fromhex(line[4 + a:4 + a + dl])
            off = addr - base
            if 0 <= off <= size - len(raw):
                data[off:off + len(raw)] = raw
    return bytes(data)

if __name__ == '__main__':
    out = srec_to_bin(sys.argv[1])
    open(sys.argv[2], 'wb').write(out)
    print(f'{sys.argv[1]} -> {sys.argv[2]} ({len(out)} байт)')
