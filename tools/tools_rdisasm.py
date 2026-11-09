import capstone, struct, sys, re
from collections import defaultdict

BASE = 0x00400000

class RecursiveDisassembler:
    def __init__(self, data, base=BASE):
        self.data = data
        self.base = base
        self.md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB | capstone.CS_MODE_MCLASS)
        self.md.detail = True
        self.funcs = {}          # start -> {addr: insn}
        self.xrefs = defaultdict(list)  # target -> [callers]
        self.worklist = []
        self.visited = set()

    def read(self, addr, n):
        off = addr - self.base
        if off < 0 or off + n > len(self.data): return None
        return self.data[off:off+n]

    def lit_val(self, addr):
        b = self.read(addr, 4)
        return struct.unpack('<I', b)[0] if b else None

    def disasm_func(self, start, max_insn=3000):
        if start in self.visited: return None
        self.visited.add(start)
        insns = {}
        addr = start
        count = 0
        pending_branches = []
        while count < max_insn:
            code = self.read(addr, 4)
            if code is None: break
            try:
                ins = next(self.md.disasm(code, addr))
            except StopIteration:
                break
            insns[addr] = ins
            count += 1
            # литералы
            note = ''
            if ins.mnemonic == 'ldr' and 'pc' in ins.op_str:
                m = re.search(r'#(0x[0-9a-f]+|\d+)', ins.op_str)
                if m:
                    lit = ((addr + 4) & ~3) + int(m.group(1), 0)
                    v = self.lit_val(lit)
                    if v is not None:
                        note = (lit, v)
                        # указатель на код -> в очередь
                        if self.base <= v < self.base + len(self.data) and (v & 1) and v not in self.visited:
                            self.worklist.append(v & ~1 | 1)
            # вызовы/переходы
            if ins.mnemonic in ('bl', 'b', 'blx') :
                m = re.match(r'#(0x[0-9a-f]+)', ins.op_str)
                if m:
                    tgt = int(m.group(1), 16)
                    if ins.mnemonic != 'b':
                        self.xrefs[tgt].append(addr)
                        if tgt not in self.visited:
                            self.worklist.append(tgt)
                    else:
                        # условный/безусловный переход — продолжаем линейно от цели тоже
                        if tgt not in insns and tgt != addr:
                            pending_branches.append(tgt)
            # условные переходы тоже
            if ins.mnemonic.startswith('b') and ins.mnemonic not in ('bl','blx','bkpt'):
                m = re.match(r'#(0x[0-9a-f]+)', ins.op_str)
                if m:
                    tgt = int(m.group(1), 16)
                    if tgt not in insns:
                        pending_branches.append(tgt)
            # конец функции
            if ins.mnemonic in ('pop', 'bx') and 'pc' in ins.op_str:
                break
            if ins.mnemonic == 'bx' and 'lr' in ins.op_str:
                break
            addr += ins.size
        # обрабатываем ветвления внутри функции (продолжаем линейно от них)
        for tgt in pending_branches:
            if tgt not in insns:
                sub = self.disasm_linear(tgt, insns)
        self.funcs[start] = insns
        return insns

    def disasm_linear(self, tgt, insns):
        addr = tgt
        for _ in range(2000):
            if addr in insns: break
            code = self.read(addr, 4)
            if code is None: break
            try:
                ins = next(self.md.disasm(code, addr))
            except StopIteration:
                break
            insns[addr] = ins
            m = re.match(r'#(0x[0-9a-f]+)', ins.op_str) if ins.mnemonic.startswith('b') else None
            if ins.mnemonic in ('pop', 'bx') and 'pc' in ins.op_str: break
            addr += ins.size
        return insns

    def run(self, entries):
        self.worklist = list(entries)
        while self.worklist:
            e = self.worklist.pop()
            f = e & ~1
            if f not in self.visited and self.read(f, 4):
                self.disasm_func(f)
        return self.funcs

    def render(self):
        lines = []
        for start in sorted(self.funcs):
            insns = self.funcs[start]
            callers = self.xrefs.get(start, [])
            lines.append(f'\n==== ФУНКЦИЯ 0x{start:08x} (вызовов: {len(callers)}: {[hex(c) for c in callers[:6]]}) ====')
            for addr in sorted(insns):
                ins = insns[addr]
                note = ''
                if ins.mnemonic == 'ldr' and 'pc' in ins.op_str:
                    m = re.search(r'#(0x[0-9a-f]+|\d+)', ins.op_str)
                    if m:
                        lit = ((addr + 4) & ~3) + int(m.group(1), 0)
                        v = self.lit_val(lit)
                        if v is not None:
                            extra = ''
                            if self.base <= v < self.base + len(self.data) and (v & 1):
                                extra = f' -> ФУНКЦИЯ 0x{v:08x}'
                            note = f'  ; [{lit:#x}] = {v:#010x}{extra}'
                lines.append(f'  {addr:08x}: {ins.bytes.hex():<10} {ins.mnemonic:<7} {ins.op_str}{note}')
        return '\n'.join(lines)

if __name__ == '__main__':
    path, out, entries = sys.argv[1], sys.argv[2], sys.argv[3]
    data = open(path, 'rb').read()
    base = BASE
    if entries == 'auto':
        vec = struct.unpack('<I', data[4:8])[0] & ~1
        entries = [vec]
        # все вектора
        for i in range(2, 16):
            v = struct.unpack('<I', data[i*4:i*4+4])[0]
            if v & 1: entries.append(v & ~1)
    else:
        entries = [int(x, 16) for x in entries.split(',')]
    rd = RecursiveDisassembler(data, base)
    rd.run(entries)
    with open(out, 'w') as f:
        f.write(rd.render())
    print(f'Дизассемблировано {len(rd.funcs)} функций -> {out}')
    print(f'Всего инструкций: {sum(len(i) for i in rd.funcs.values())}')
