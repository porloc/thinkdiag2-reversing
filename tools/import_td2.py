#!/usr/bin/env python3
"""Import TD2.bin into Ghidra at 0x00400000 (Cortex-M), analyze, then locate:
  - functions referencing AES tables @ 0x004CBDF8
  - serial keyder near XOR_TABLE @ 0x004D9FFC / LAUNCHPRIVELIBJM @ 0x004DA154
  - DOWNLOAD string refs @ 0x004E1E0
Decompile the found functions."""
import os

os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')

import pyghidra
pyghidra.start()

from ghidra.base.project import GhidraProject
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.program.model.address import AddressSet
from ghidra.app.util.importer import MessageConsole
from java.lang import String

PROJ_DIR = '/home/z/thinkdiag/ghidra_proj'
PROJ = 'thinkdiag'
BIN = '/home/z/thinkdiag/downloads/td2_extract/original TD2.bin'
BASE = 0x00400000
OUT = '/home/z/thinkdiag/analysis/td2'
os.makedirs(OUT, exist_ok=True)

project = GhidraProject.openProject(PROJ_DIR, PROJ, True)
try:
    fm_names = [f.getName() for f in project.getRootData().getFiles()] if hasattr(project.getRootData(), 'getFiles') else []
    print("existing:", fm_names)
    # find language used by existing tdmini program
    prog0 = project.openProgram('/', 'Project thinkdiagmini.bin', False)
    lang_id = prog0.getLanguageID()
    comp_id = prog0.getCompilerSpecID()
    print("tdmini language:", lang_id, comp_id)
    project.close(prog0)

    name = 'TD2.bin'
    existing = False
    try:
        prog = project.openProgram('/', name, False)
        existing = True
        print("TD2 already imported")
    except Exception:
        prog = None
    if prog is None:
        print("importing TD2.bin ...")
        prog = project.importProject(BIN, BASE, 0, 0)
    # project.importProject is not the API; use importProjectFromFile
finally:
    pass
project.close()
print("PHASE1 DONE")
