all: main.o lesson17.o
	gcc -o program main.o lesson17.o

main.o: main.c lesson17Heads.h
	gcc -c main.c

lesson17.o: lesson17.c lesson17Heads.h
	gcc -c lesson17.c

run:
	./program
	
