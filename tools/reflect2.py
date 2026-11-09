import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()
from ghidra.app.emulator import EmulatorHelper
for m in EmulatorHelper.class_.getMethods():
    if any(k in str(m) for k in ['run', 'PC', 'break', 'Break', 'write', 'read', 'Register']):
        print(m)
