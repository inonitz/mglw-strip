# mglw-strip
# Windows Only repo
# Requires mingw64 (llvm version recommended: https://github.com/mstorsjo/llvm-mingw/releases)
# !!! If you REALLY want to use Repository, you're going to have to make a couple of changes in the includes !!!
#
#
# Requires GLFW at mingw_install_folder/../lib/GLFW/ ==> (feel free to change in .vscode/clangd/makefile.mf)
# !!! IF YOURE GOING TO CHANGE includePath's, ALSO UPDATE THEM IN settings.json FOR CLANGD TO WORK PROPERLY !!!
# [folder] GLFW
#     [folder] include (not important, already inside src/include )
#     [folder] lib
#         [file] glfw3.dll
#         [file] libglfw3.a
#         [file] libglfw3dll.a
#     ----
# ----
#
#
# ldd returns the dlls required for running this program, make sure your program will find them (unless you want random error codes)
# Moreover, the easiest way to verify your the program has them is by running ldd yourself.
# Make sure your compiler can find the libraries/dlls, for instance by adding the libraries' paths to windows' PATH variable ==>
# Ex. 
# [PATH] Edit Environment Variables (Order matters, the compiler will probably search in the order you specify):
#   --> C:\CTools\mingw64-msvcrt\bin
#   --> C:\CTools\mingw64-msvcrt\lib
#   --> C:\CTools\mingw64-msvcrt\x86_64-w64-mingw32
#   --> C:\CTools\lib\GLFW\lib
#   --> ...
#
#
# Heres the output I get for ldd (after a lot of trial and error):
# $ ldd ./build/debug/bin/mglw.exe
#        ntdll.dll => /c/Windows/SYSTEM32/ntdll.dll (0x7fff94710000)
#        KERNEL32.DLL => /c/Windows/System32/KERNEL32.DLL (0x7fff92c40000)
#        KERNELBASE.dll => /c/Windows/System32/KERNELBASE.dll (0x7fff91e70000)
#        msvcrt.dll => /c/Windows/System32/msvcrt.dll (0x7fff92760000)
#        USER32.dll => /c/Windows/System32/USER32.dll (0x7fff93da0000)
#        win32u.dll => /c/Windows/System32/win32u.dll (0x7fff92200000)
#        GDI32.dll => /c/Windows/System32/GDI32.dll (0x7fff94230000)
#        gdi32full.dll => /c/Windows/System32/gdi32full.dll (0x7fff92470000)
#        msvcp_win.dll => /c/Windows/System32/msvcp_win.dll (0x7fff926b0000)
#        ucrtbase.dll => /c/Windows/System32/ucrtbase.dll (0x7fff92580000)
#        libunwind.dll => /c/CTools/mingw64-msvcrt/bin/libunwind.dll (0x7fff74030000)
#        libc++.dll => /c/CTools/mingw64-msvcrt/bin/libc++.dll (0x7fff73d20000)
#        glfw3.dll => /c/CTools/lib/GLFW/lib/glfw3.dll (0x54950000)
#        SHELL32.dll => /c/Windows/System32/SHELL32.dll (0x7fff93430000)
#
# 
# If I forgot anything or the project just doesn't work, feel free to throw stones at me when you get the chance : )
