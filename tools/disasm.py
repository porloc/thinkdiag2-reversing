#!/usr/bin/env python3
"""Thumb-2 disassembler with literal pool annotation for Cortex-M4 dumps."""
import sys, struct
from capstone import *

def load_bin(path, base):
    data = open(path, "rb").read()
    return data, base

def disasm_range(data, base, start, length, resolve=True):
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS)
    md.detail = True
    off = start - base
    code = data[off:off+length]
    out = []
    # Pre-scan literal pools: words that look like addresses in flash/ram range
    lits = {}
    for i in range(0, len(code)-3, 4):
        w = struct.unpack("<I", code[i:i+4])[0]
        if (base <= w < base+len(data)) or (0x20000000 <= w < 0x20080000) or (0x40000000 <= w < 0x60000000) or (0xE0000000 <= w < 0x100000000):
            lits[start+i] = w
    for insn in md.disasm(code, start):
        line = f"0x{insn.address:08X}:  {insn.bytes.hex():<12} {insn.mnemonic:<8} {insn.op_str}"
        # Annotate PC-relative loads
        if resolve and insn.mnemonic.startswith("ldr") and "[pc" in insn.op_str:
            # compute literal address
            import re
            m = re.search(r"\[pc,\s*(?:#)?(-?0x[\da-fA-F]+|-?\d+)", insn.op_str)
            if m:
                imm = int(m.group(1), 0)
                lit_addr = ((insn.address + 4) & ~3) + imm
                o = lit_addr - base
                if 0 <= o <= len(data)-4:
                    w = struct.unpack("<I", data[o:o+4])[0]
                    line += f"   ; [0x{lit_addr:08X}] = 0x{w:08X}"
                    if (base <= w < base+len(data)):
                        line += f" (-> flash+0x{w-base:X})"
                    elif (0x20000000 <= w < 0x20080000):
                        line += " (RAM)"
        out.append(line)
    return "\n".join(out)

if __name__ == "__main__":
    path = sys.argv[1]
    base = int(sys.argv[2], 0)
    start = int(sys.argv[3], 0)
    length = int(sys.argv[4], 0) if len(sys.argv) > 4 else 0x100
    data, base = load_bin(path, base)
    print(disasm_range(data, base, start, length))
