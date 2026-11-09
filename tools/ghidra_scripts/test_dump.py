# Ghidra headless postScript: dump analysis of ThinkCar firmware
# @category Analysis

import os

OUT_DIR = os.environ.get('GHIDRA_OUT', '/home/z/thinkdiag/analysis')
os.makedirs(OUT_DIR, exist_ok=True)

program = currentProgram
fm = program.getFunctionManager()
print("=== Program: %s ===" % program.getName())
print("Language: %s" % program.getLanguage().getLanguageID())
print("Image base: %s" % program.getImageBase())
print("Functions: %d" % fm.getFunctionCount())

with open(os.path.join(OUT_DIR, 'functions_%s.txt' % program.getName().replace('.', '_')), 'w') as f:
    for func in fm.getFunctions(True):
        f.write("%s %s\n" % (func.getEntryPoint(), func.getName()))

print("Function list written")
