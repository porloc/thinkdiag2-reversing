#!/usr/bin/env python3
"""Explore GhidraProject API and open the tdmini program."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    print("METHODS:", [m for m in dir(project) if not m.startswith('_')])
    pd = project.getProjectData()
    print("ProjectData METHODS:", [m for m in dir(pd) if not m.startswith('_')][:30])
    root = pd.getRootFolder()
    print("Root folder files:", [f.getName() for f in root.getFiles()])
finally:
    project.close()
