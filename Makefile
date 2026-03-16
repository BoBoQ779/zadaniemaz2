CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic

all:
	$(CC) $(CFLAGS) src/main.c -o program
