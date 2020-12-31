@if exist scripts\minimaws\minimaws.sqlite3 del scripts\minimaws\minimaws.sqlite3
@echo off
del arcade64.sym
:start
del C:\ARCADE\build\generated\resource\mamevers.rc
del arcade64.exe
if exist arcade64.exe goto start
make64 -j6 %1 %2 %3
copy /Y arcade64.exe arcade.exe

