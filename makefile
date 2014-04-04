

all: configurator.c flags.o
	gcc -Wall -o configurator configurator.c flags.o

flags.o: flags.h flags.c
	gcc -c -Wall flags.c