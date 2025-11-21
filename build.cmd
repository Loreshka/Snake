@echo off
echo === Building SnakeGame ===

rem Compile source files
cl /c main.cpp
cl /c Apple.cpp
cl /c Snake.cpp
cl /c Engine.cpp
cl /c Viewer.cpp

rem Link into executable
cl main.obj Apple.obj Snake.obj Engine.obj Viewer.obj /Fe:snake_game.exe

<<<<<<< HEAD
echo === Build finished ===
=======
echo === Build finished ===
>>>>>>> main
