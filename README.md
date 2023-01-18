# mglw-strip (Making OpenGL Work -- Stripped)
* ### Original Repository (mglw) was for Ray-tracing
* ### Was originally used in WSL exclusively, but due to Platform Limitations & Performance concerns I decided to port it to Windows [MinGW]


  * **Windows Only Repository**
  * **Requires mingw64 ( [llvm version recommended](https://github.com/mstorsjo/llvm-mingw/releases) )**


## Requirements & General Workflow
### Requires **[GLFW](https://www.glfw.org/download)** at *mingw_install_folder/../lib/GLFW/* (feel free to change in .vscode/clangd/makefile.mf):
```
[Folder] GLFW
└───[Folder] include (already at src/include/GLFW/* [not important])  
└───[Folder] lib
│   │   glfw3.dll
│   │   libglfw3.a
│   │   libglfw3dll.a
```
### Build Workflow:
<ul>
    <li> Call ' make debug // release// clean[dbg][rel] // rec[dbg][rel] ' </li>
    <li> <em>Makefile</em> in src/* is executed, outsourcing variables for internal makefile</li>
    <li> <em>Makefile</em> calls <em>gen_commands.sh</em> <em><strong>(Located at .vscode/clangd_cc)</em></strong> </li>
    <li> <em>gen_commands.sh</em> executes <em>makefile.mf</em> <em><strong>(Also at .vscode/clangd_cc)</em></strong> with all variables set </li>
    <li> <em>makefile.mf</em> compiles the project source</li>
</ul>

### [NOTICE] WHEN MODIFYING INCLUDE PATHS IN *makefile.mf*, ALSO UPDATE IN settings.json [NOTICE]


## First Time Running & Executable DLL's

* **Easiest** way of making sure your executable won't crash is by first using **[ldd](https://man7.org/linux/man-pages/man1/ldd.1.html)**
*  Make sure the Compiler can find the appropriate lib's/dll's, by for instance **adding them to PATH** ***(Order Matters!)*** **:**
```
[PATH] Edit Environment Variables [My Machine]
  --> C:\CTools\mingw64-msvcrt\bin
  --> C:\CTools\mingw64-msvcrt\lib
  --> C:\CTools\mingw64-msvcrt\x86_64-w64-mingw32
  --> C:\CTools\lib\GLFW\lib
  --> ...
```
* Here's the output I got after a lot of trial and error with the dll's:
```bash
$ ldd ./build/debug/bin/mglw.exe
       ntdll.dll      => /c/Windows/SYSTEM32/ntdll.dll (0x7fff94710000)
       KERNEL32.DLL   => /c/Windows/System32/KERNEL32.DLL (0x7fff92c40000)
       KERNELBASE.dll => /c/Windows/System32/KERNELBASE.dll (0x7fff91e70000)
       msvcrt.dll     => /c/Windows/System32/msvcrt.dll (0x7fff92760000)
       USER32.dll     => /c/Windows/System32/USER32.dll (0x7fff93da0000)
       win32u.dll     => /c/Windows/System32/win32u.dll (0x7fff92200000)
       GDI32.dll      => /c/Windows/System32/GDI32.dll (0x7fff94230000)
       gdi32full.dll  => /c/Windows/System32/gdi32full.dll (0x7fff92470000)
       msvcp_win.dll  => /c/Windows/System32/msvcp_win.dll (0x7fff926b0000)
       ucrtbase.dll   => /c/Windows/System32/ucrtbase.dll (0x7fff92580000)
       libunwind.dll  => /c/CTools/mingw64-msvcrt/bin/libunwind.dll (0x7fff74030000)
       libc++.dll     => /c/CTools/mingw64-msvcrt/bin/libc++.dll (0x7fff73d20000)
       glfw3.dll      => /c/CTools/lib/GLFW/lib/glfw3.dll (0x54950000)
       SHELL32.dll    => /c/Windows/System32/SHELL32.dll (0x7fff93430000)
```


## Contributing
**I'm not planning on making this repository public anytime soon.**\
If I were to actually make this public, I don't think anyone would be this interested in making Pull-Requests anyway.\
Just open an issue and we'll discuss.


## License & Last Notice!
Don't really mind, would prefer if not used commercially and instead for personal projects only
### ***If I forgot anything or the project just doesn't work, feel free to throw stones at me when you get the chance : )***
# *I have NO clue why I spent so much time on this README when no one will read it besides me. Maybe now I have to make this public lol*
