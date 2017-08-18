call newsrc.bat
call clean.bat
call clean.bat
call clean.bat
call clean.bat

rem --- 32bit ---
del arcade32.exe
call make32 -j4 %1 %2 %3
if not exist arcade32.exe goto end

rem --- 64bit ---
del arcade64.exe
call make64 -j4 %1 %2 %3
if not exist arcade64.exe goto end

cls
echo Compile was successful.
echo.
echo 7Z up each exe;
echo and RAR the source.

:end
