@echo off

::Makes it easier to use.
doskey ls=dir /b
doskey ls2=dir /D/O:GN
doskey clear=cls

::Project Aliases
doskey build=scons
doskey clean=scons -c
doskey run="build\calculator.exe"
doskey go=scons ^&^& "build\calculator.exe"

::Other
color 0A
type src\img\logo

echo:
echo "build" - used to build the calculator application.
echo:
echo "clean"   - used to clean the build environment.
echo:
echo "run"   - used to run the calculator application.
echo:
echo "go"   - used to build and run the calculator application.
