@echo off
del gameros.obj gameros.img
if exist gameros.obj goto fileuse
if exist gameros.img goto fileuse
cls

ml /nologo /omf gameros.asm
if errorlevel 1 goto errasm

link16 /nologo /tiny gameros.obj, gameros.img, nul.map, null, nul.def
if errorlevel 1 goto errlink

dir gameros.img
del gameros.obj
goto pend


:errlink
echo _
echo Link error
goto pend


:errasm
echo _
echo Assembly Error
goto pend


:fileuse
echo _
echo ERROR: File In Use!
goto pend

:pend
pause