@echo off
@set CONFIG_ARCHITECTURE=x86
@call c:\msys64\win32\env.bat
@make -j5 SUBTARGET=arcade OSD=winui PTR64=0
@echo Job Done!
pause

