@echo off

gcc -Wall -Wextra -pedantic -c main.c
gcc -Wall -Wextra -pedantic -o main.exe main.o -L./ -lventdeq
del *.o

pause
