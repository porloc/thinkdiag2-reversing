#!/usr/bin/env python3
import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()
from ghidra.base.project import GhidraProject
for m in GhidraProject.class_.getMethods():
    if 'openProgram' in str(m) or 'importProgram' in str(m):
        print(m)
