#!/usr/bin/env python3
"""Open existing Ghidra project via pyghidra and run analysis scripts."""
import os
import sys

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject

PROJ_DIR = '/home/z/thinkdiag/ghidra_proj'
PROJ_NAME = 'thinkdiag'

project = GhidraProject.openProject(PROJ_DIR, PROJ_NAME, True)
try:
    data_folder = project.getRootProjectDataFolder()
    print("Files in project:")
    for f in data_folder.getFiles():
        print(" -", f.getName())
finally:
    project.close()
