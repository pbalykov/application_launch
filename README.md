# Launching an application for UNIX systems

### About the code

The code was written in C++ using the qt framework and
the UNIX library **#include <unistd.h>**
for the ***execvp*** function that launches applications,
the program also supports two languages Russian and English.

### Launch

after installation, go to the application\_launch folder and if you do it through idl, 
then configure the compiler for yourself if the terminal is used, then ..

``` 
   qmake
   make
   ./execKod
```
Withoturn the library, **qt** will not be able to!!!

### Why do I need this program?

This program was written as an application launcher for window readers (but it will not work for them) and
 the tax can be called as **xfce4-appfinder** current without auto prompts (why they are needed **=)**)
