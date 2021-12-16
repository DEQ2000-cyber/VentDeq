@echo off

rem Para C

rem gcc -Wall -Wextra -pedantic -c VentDeq.c
rem ar rsc libventdeq.a VentDeq.o

rem Para C

rem x86_64-w64-mingw32-gcc -Wall -Wextra -pedantic -m64 -funroll-loops -O3 -c VentDeq.c
rem x86_64-w64-mingw32-gcc -Wall -Wextra -pedantic -m64 -c main.c
rem x86_64-w64-mingw32-gcc -Wall -Wextra -pedantic -m64 main.o VentDeq.o -o main.exe
rem del *.o




rem Para C++

rem x86_64-w64-mingw32-g++ -Wall -Wextra -pedantic -m64 -funroll-loops -O3 -c VentDeq.c
rem x86_64-w64-mingw32-g++ -Wall -Wextra -pedantic -m64 -c main.cpp
rem x86_64-w64-mingw32-g++ -Wall -Wextra -pedantic -m64 main.o VentDeq.o -o main.exe
rem del *.o




gcc -Wall -Wextra -pedantic -c main.c
gcc -Wall -Wextra -pedantic -o main.exe main.o -L./ -lventdeq
del *.o

pause