# -*- coding: utf-8 -*-
# FindXrefs.py — Ghidra postScript: печатает все ссылки НА заданные адреса
# Аргументы: <addr1>,<addr2>,...
from ghidra.program.model.address import Address

args = getScriptArgs()
prog = currentProgram
rm = prog.getReferenceManager()
fm = prog.getFunctionManager()
af = prog.getAddressFactory()
space = af.getDefaultAddressSpace()

targets = []
for a in args[0].split(','):
    a = a.strip()
    if a:
        v = int(a, 16) & 0xFFFFFFFE
        targets.append(space.getAddress(v))

for ta in targets:
    print("=== XREFS to %s ===" % ta)
    f = fm.getFunctionContaining(ta)
    if f:
        print("  (внутри функции %s @ %s)" % (f.getName(), f.getEntryPoint()))
    refs = rm.getReferencesTo(ta)
    n = 0
    for r in refs:
        src = r.getFromAddress()
        fsrc = fm.getFunctionContaining(src)
        fname = fsrc.getName() + "@" + str(fsrc.getEntryPoint()) if fsrc else "?"
        print("  %s : %s  (from func %s)" % (src, r.getReferenceType(), fname))
        n += 1
    if n == 0:
        print("  (нет ссылок)")
