# Calvin Nichols
# June 14, 2013

CC = gcc
CFLAGS = -Wall -ansi -pedantic

all: solution

solution: solution.c
	$(CC) $(CFLAGS) -o ./bin/solution solution.c

run: all
	./bin/solution

clean:
	rm -f ./bin/solution