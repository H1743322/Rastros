all: exe

exe: main.o
	gcc -g -o exe dados.h dados.c interface.c logica.c main.o
	
main.o: main.c
	gcc -g -o main.o main.c -c -W -Wall -ansi -pedantic