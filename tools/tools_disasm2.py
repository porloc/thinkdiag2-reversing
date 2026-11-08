import capstone, struct, sys, re

BASE = 0x00400000

def find_ldr_refs(data, target, search_back=0x4000, label=''):
    """Ищет инструкции LDR rX,[pc,#imm] с литералом по адресу target"""
    refs = []
    off_min = max(0, target - BASE - search_back)
    off_max = target - BASE - 2
    for o in range(off_min, off_max, 2):
        hw = struct.unpack('<H', data[o:o+2])[0]
        pc = BASE + o
        # 16-bit LDR Rd, [PC, #imm5*4]: 01001 Rd imm8
        if (hw & 0xF800) == 0x4800:
            imm = (hw & 0xFF) * 4
            lit = ((pc + 4) & ~3) + imm
            if lit == target:
                refs.append((pc, 'ldr16', (hw >> 8) & 7))
        # 32-bit LDR.W Rd, [PC, #imm12]: F8DF Rd imm12
        if (hw & 0xFFE0) == 0xF8D0 and (hw & 0xF) == 0xF:
            hw2 = struct.unpack('<H', data[o+2:o+4])[0] if o+4 <= len(data) else 0
            imm = hw2 & 0xFFF
            lit = ((pc + 4) & ~3) + imm
            if lit == target:
                refs.append((pc, 'ldr32', (hw2 >> 12) & 0xF))
    return refs

def disasm_range(data, start_flash, length):
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB | capstone.CS_MODE_MCLASS)
    md.detail = False
    off = start_flash - BASE
    out = []
    code = data[off:off+length]
    for ins in md.disasm(code, start_flash):
        note = ''
        m = re.search(r'\[pc,\s*#(0x[0-9a-f]+|\d+)\]', ins.op_str)
        if ins.mnemonic == 'ldr' and m:
            imm = int(m.group(1), 0)
            lit_addr = ((ins.address + 4) & ~3) + imm
            lo = lit_addr - BASE
            if 0 <= lo <= len(data)-4:
                val = struct.unpack('<I', data[lo:lo+4])[0]
                note = f'  ; [{lit_addr:#x}]={val:#010x}'
        out.append(f'{ins.address:08x}: {ins.bytes.hex():<10} {ins.mnemonic:<7} {ins.op_str}{note}')
    return out

if __name__ == '__main__':
    path = sys.argv[1]
    data = open(path, 'rb').read()
    cmd = sys.argv[2]
    if cmd == 'refs':
        target = int(sys.argv[3], 16)
        refs = find_ldr_refs(data, target)
        print(f'Ссылки LDR на {target:#x}:')
        for pc, kind, rd in refs:
            print(f'  {pc:#x} ({kind}, r{rd})')
    elif cmd == 'dis':
        start = int(sys.argv[3], 16)
        length = int(sys.argv[4], 16) if len(sys.argv) > 4 else 0x100
        for line in disasm_range(data, start, length):
            print(line)
