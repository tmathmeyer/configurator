

all: configurator.c flags.o
	gcc -Wall -o configurator configurator.c flags.o

flags.o: flags/flags.h flags/flags.c
	gcc -c -Wall flags/flags.c

clean:
	rm -f *.o configurator