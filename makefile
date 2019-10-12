all: str.o main.o
	gcc -o strtest str.o main.o

dwstring.o: str.c str.h
	gcc -c str.c

main.o: main.c str.h
	gcc -c main.c

run:
	./strtest

clean:
	rm *.o
	rm *~
