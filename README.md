# ND Command Line Paint

This program displays and creates low-resolution images in the Windows command line.
It reads a custom file format: `ndcmd_img`.

File structure and specifications are inside further documentation.
 
## Building

This project is meant to be compiled with mingw32-gcc-g++ 6.3.0-1. 

The command for building the project is:
 `g++ paint.cpp ndcmd_img.cpp -o nd_cmd_paint.exe -static-libstdc++ -std=c++11`
 



