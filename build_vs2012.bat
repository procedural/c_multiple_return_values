set "VSCMD_START_DIR=%CD%"
call "\Program Files (x86)\Microsoft Visual Studio 11.0\VC\vcvarsall.bat" x86_amd64
cl /MT main.cpp
del /q main.obj
pause