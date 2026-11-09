#!/usr/bin/env python3
"""Thumb-2 disassembler with literal annotation for SAME70 dumps."""
import sys, struct, re
from capstone import *

def disasm(path, base, start, length):
    data = open(path, "rb").read()
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS)
    off = start - base
    code = data[off:off+length]
    out = []
    for insn in md.disasm(code, start):
        line = f"0x{insn.address:08X}:  {insn.bytes.hex():<12} {insn.mnemonic:<8} {insn.op_str}"
        if insn.mnemonic.startswith("ldr") and "[pc" in insn.op_str:
            m = re.search(r"\[pc,\s*(?:#)?(-?)(-?0x[\da-f]+|-?\d+)", insn.op_str)
            if m:
                imm = int(m.group(2), 0)
                if m.group(1) == '-': imm = -imm
                lit = ((insn.address+4)&~3) + imm
                o = lit - base
                if 0 <= o <= len(data)-4:
                    w = struct.unpack("<I", data[o:o+4])[0]
                    line += f"   ; [0x{lit:08X}] = 0x{w:08X}"
        out.append(line)
    return "\n".join(out)

if __name__ == "__main__":
    print(disasm(sys.argv[1], int(sys.argv[2],0), int(sys.argv[3],0), int(sys.argv[4],0)))
