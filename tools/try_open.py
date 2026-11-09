#!/usr/bin/env python3
import os
os.environ.setdefault('GHIDRA_INSTALL_DIR', '/home/z/thinkdiag/ghidra/ghidra_12.2_PUBLIC')
import pyghidra
pyghidra.start()
from ghidra.base.project import GhidraProject

project = GhidraProject.openProject('/home/z/thinkdiag/ghidra_proj', 'thinkdiag', True)
try:
    for args in [('Project thinkdiagmini.bin', None, False),
                 ('/Project thinkdiagmini.bin', None, False)]:
        try:
            program = project.openProgram(*args)
            print(f"OK: {args} -> {program.getName()} base={program.getImageBase()}")
            program.release(this=None) if False else None
            from ghidra.program.database import ProgramDB
            program.save(None, None) if False else None
            # just close via project transaction? keep first success
            break
        except Exception as e:
            print(f"FAIL: {args}: {e}")
finally:
    project.close()
