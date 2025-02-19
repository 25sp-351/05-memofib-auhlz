all: fib

OBJS = main.o fib.o
CC = gcc
CFLAGS = -Wall

fib: $(OBJS)
	$(CC) -o fib $(CFLAGS) $(OBJS)

main.o: main.c fib.h
	$(CC) $(CFLAGS) -c main.c

fib.o: fib.c fib.h
	$(CC) $(CFLAGS) -c fib.c

clean:
	rm -f fib $(OBJS)