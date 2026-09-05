CC = gcc
CFLAGS = -O2 -s

all: clean main

main: 
	$(CC) $(CFLAGS) -c request.c -o request.o
	$(CC) $(CFLAGS) -c main.c -o main.o
	$(CC) $(CFLAGS) request.o main.o -o main

clean:
	rm -f main
