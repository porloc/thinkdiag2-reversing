import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()
from ghidra.app.emulator import EmulatorHelper
for m in EmulatorHelper.class_.getMethods():
    print(m)
print('--- fields ---')
for f in EmulatorHelper.class_.getFields():
    print(f)
