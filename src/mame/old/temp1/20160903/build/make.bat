del *.sym
:start
del arcade32.exe
if exist arcade32.exe goto start
make32 -j4 %1 %2 %3
