# -*- coding: utf-8 -*-
# DumpDecomp.py — Ghidra headless postScript (Jython 2.7)
# Дампит декомпиляцию всех функций в диапазоне адресов.
# Аргументы: <output_file> [min_addr_hex_with_0x] [max_addr_hex_with_0x]
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
outpath = args[0]
prog = currentProgram
fm = prog.getFunctionManager()
af = prog.getAddressFactory()
minAddr = prog.getMinAddress()
maxAddr = prog.getMaxAddress()
if len(args) > 1 and args[1] != '-':
    minAddr = af.getAddress(args[1])
if len(args) > 2 and args[2] != '-':
    maxAddr = af.getAddress(args[2])

decomp = DecompInterface()
decomp.openProgram(prog)
mon = ConsoleTaskMonitor()

out = open(outpath, 'w')
out.write("// Ghidra decompilation dump: %s\n" % prog.getName())
out.write("// range: %s .. %s\n\n" % (minAddr, maxAddr))
count = 0
failed = 0
for f in fm.getFunctions(True):
    ea = f.getEntryPoint()
    if ea < minAddr or ea > maxAddr:
        continue
    res = decomp.decompileFunction(f, 120, mon)
    out.write("//==== FUNC %s @ %s ====\n" % (f.getName(), ea))
    if res.decompileCompleted():
        out.write(res.getDecompiledFunction().getC())
        out.write("\n\n")
        count += 1
    else:
        out.write("// FAILED to decompile\n\n")
        failed += 1
    if mon.isCancelled():
        break
out.close()
print("DumpDecomp: %d functions (%d failed) -> %s" % (count, failed, outpath))
