# -*- coding: utf-8 -*-
# MarkEntries.py — Ghidra preScript (Jython 2.7), выполняется ДО авто-анализа
# Создаёт функции по векторной таблице Cortex-M @ image base
# + доп. адреса (через запятую, hex) из argv[0], если заданы
from ghidra.program.model.symbol import SourceType
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.cmd.disassemble import DisassembleCommand

prog = currentProgram
af = prog.getAddressFactory()
mem = prog.getMemory()
fm = prog.getFunctionManager()
base = prog.getMinAddress()
maxAddr = prog.getMaxAddress()
space = af.getDefaultAddressSpace()

args = getScriptArgs()
extra = []
if len(args) > 0 and args[0] != '-':
    extra = [a for a in args[0].split(',') if a]

def read_word(addr):
    try:
        v = mem.getInt(addr)
        if v < 0:
            v += 0x100000000
        return v
    except:
        return None

def mkaddr(v):
    try:
        return space.getAddress(v & 0xFFFFFFFFFFFFFF)
    except:
        return None

targets = []
seen = set()
def add(ta):
    if ta is not None and ta >= base and ta < maxAddr:
        k = str(ta)
        if k not in seen:
            seen.add(k)
            targets.append(ta)

# векторная таблица: до 0x200 байт (16 ядерных + периферийные)
for i in range(1, 128):
    a = base.add(i * 4)
    if a.add(4) > maxAddr:
        break
    w = read_word(a)
    if w is None or w == 0 or w == 0xFFFFFFFF:
        continue
    add(mkaddr(w & 0xFFFFFFFE))

for x in extra:
    try:
        v = int(x, 16)
    except:
        continue
    add(mkaddr(v & 0xFFFFFFFE))

created = 0
for ta in targets:
    if fm.getFunctionAt(ta) is None:
        d = DisassembleCommand(ta, None, True)
        d.applyTo(prog, monitor)
        c = CreateFunctionCmd("sub_%s" % ta, ta, None, SourceType.IMPORTED)
        c.applyTo(prog, monitor)
        created += 1
print("MarkEntries: %d entry functions (of %d targets)" % (created, len(targets)))
