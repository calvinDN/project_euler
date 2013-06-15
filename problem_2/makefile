# Calvin Nichols
# June 14, 2013

CC = gcc
CFLAGS = -Wall -ansi -pedantic

all: solution
	./solution

solution: solution.c
	gcc $(CFLAGS) -o $@ solution.c

run: solution
	./solution

clean:
	rm -f solution