#!/usr/bin/env python3
"""Convert Motorola S-record to binary image."""
import sys, re

def parse_mot(path):
    base = None
    regions = []
    cur_start = None
    cur_data = bytearray()
    with open(path) as f:
        for line in f:
            line = line.strip()
            if not line or not line.startswith('S'):
                continue
            t = line[1]
            if t not in '123':
                continue
            # S1: 16-bit addr, S2: 24-bit, S3: 32-bit
            payload = bytes.fromhex(line[4:4+2*(int(line[2:4],16)-1-({('1'):2,('2'):3,('3'):4}[t]))]) if False else None
            # simpler: parse fully
            count = int(line[2:4], 16)
            data_hex = line[4:4+count*2]
            raw = bytes.fromhex(data_hex)
            if t == '1':
                addr = int.from_bytes(raw[0:2],'big'); dat = raw[2:-1]
            elif t == '2':
                addr = int.from_bytes(raw[0:3],'big'); dat = raw[3:-1]
            else:
                addr = int.from_bytes(raw[0:4],'big'); dat = raw[4:-1]
            if cur_start is None:
                cur_start = addr
                cur_data = bytearray()
            elif addr != cur_start + len(cur_data):
                regions.append((cur_start, bytes(cur_data)))
                cur_start = addr
                cur_data = bytearray()
            cur_data.extend(dat)
    if cur_start is not None:
        regions.append((cur_start, bytes(cur_data)))
    return regions

if __name__ == "__main__":
    regions = parse_mot(sys.argv[1])
    total = sum(len(d) for _,d in regions)
    lo = min(a for a,_ in regions)
    hi = max(a+len(d) for a,d in regions)
    print(f"regions: {len(regions)}, total bytes: {total:#x}, range: {lo:#x}-{hi:#x}")
    for a,d in regions:
        print(f"  {a:#010x} +{len(d):#x}")
    if len(sys.argv) > 2:
        out = bytearray(b'\xff' * (hi-lo))
        for a,d in regions:
            out[a-lo:a-lo+len(d)] = d
        open(sys.argv[2],'wb').write(out)
        print(f"wrote {sys.argv[2]}: {len(out):#x} bytes, base {lo:#x}")
