set "VSCMD_START_DIR=%CD%"
call "\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64
cl /MT main.cpp
del /q main.obj
pause