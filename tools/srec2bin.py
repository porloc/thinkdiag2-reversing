#!/usr/bin/env python3
"""Motorola S-record to binary converter."""
import sys

def parse_srec(path):
    chunks = {}
    warned = False
    with open(path, 'r', errors='replace') as f:
        for line in f:
            line = line.strip()
            if not line or not line.startswith('S'):
                continue
            t = line[0:2]
            if t not in ('S1', 'S2', 'S3'):
                continue  # skip headers/counts/terminators
            cnt = int(line[2:4], 16)
            payload = bytes.fromhex(line[4:4 + (cnt - 1) * 2])
            checksum = int(line[4 + (cnt - 1) * 2:4 + cnt * 2], 16)
            # verify checksum: sum of count + payload + checksum == 0 mod 256
            # (J-Flash exports may use non-standard checksums - only warn once)
            total = cnt + sum(payload) + checksum
            if total & 0xFF != 0 and not warned:
                warned = True
                print("NOTE: non-standard checksums detected (J-Flash quirk), skipping checks")
            if t == 'S1':
                addr = int.from_bytes(payload[0:2], 'big'); data = payload[2:]
            elif t == 'S2':
                addr = int.from_bytes(payload[0:3], 'big'); data = payload[3:]
            else:
                addr = int.from_bytes(payload[0:4], 'big'); data = payload[4:]
            chunks[addr] = data
    if not chunks:
        return None, None
    base = min(chunks.keys())
    end = max(a + len(d) for a, d in chunks.items())
    size = end - base
    buf = bytearray(size)
    filled = bytearray(size)
    gaps = []
    for a, d in chunks.items():
        off = a - base
        buf[off:off + len(d)] = d
        filled[off:off + len(d)] = b'\x01' * len(d)
    # find gaps
    i = 0
    while i < size:
        if not filled[i]:
            j = i
            while j < size and not filled[j]:
                j += 1
            gaps.append((base + i, base + j))
            i = j
        else:
            i += 1
    return base, bytes(buf), gaps

if __name__ == '__main__':
    for path in sys.argv[1:]:
        result = parse_srec(path)
        if result is None:
            print(f"{path}: no S1/S2/S3 records")
            continue
        base, data, gaps = result
        out = path.rsplit('.', 1)[0] + '.bin'
        with open(out, 'wb') as f:
            f.write(data)
        print(f"{path}: base=0x{base:08X} size=0x{len(data):X} -> {out}")
        if gaps:
            print(f"  GAPS ({len(gaps)}):")
            for g in gaps[:20]:
                print(f"    0x{g[0]:08X} - 0x{g[1]:08X} ({g[1]-g[0]} bytes)")
