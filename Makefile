all: main.c
	x86_64-w64-mingw32-gcc -std=c99 -Wall -mwindows -municode -o main main.c

clean:
	rm -f main.exe
