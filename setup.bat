@echo off

: start /d . http://cygwin.com/setup-x86.exe
echo Please wait until setup-x86.exe is done downloading, then press any key.
pause

echo Installing cygwin
echo Please wait until cygwin is done installing, then press any key.

%USERPROFILE%\Downloads\setup-x86.exe ^
--quiet-mode ^
--no-admin ^
--packages ^
wget,^
git,^
clang,^
mintty,^
gdb

pause

set PWD=%CD%
set PWD=%PWD:\=\\\\%
c:\cygwin\bin\bash.exe --login -i -c "bash %PWD%\\\\setup.sh %PWD%"

echo Done!
pause
