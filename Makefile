CC = gcc
C_FLAGS = -Wall

all: divcalc.o calc_areas.o calc_volumes.o
	$(CC) divcalc.o calc_areas.o calc_volumes.o -o divcalc
divcalc: divcalc.c
	$(CC) -c divcalc.c -o divcalc.o
calc_areas.o: calc_areas.c calc_areas.h
	$(CC) -c calc_areas.c -o calc_areas.o
calc_volumes.o: calc_volumes.c calc_volumes.h
	$(CC) -c calc_volumes.c -o calc_volumes.o
clean:
	rm *.o divcalc
.PHONY: clean
