

all: test.c flags.o
	gcc -Wall -o ft test.c flags.o

flags.o: flags/flags.h flags/flags.c
	gcc -c -Wall flags/flags.c

clean:
	rm -f *.o ft
