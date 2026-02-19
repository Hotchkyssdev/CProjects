CC = gcc
CFLAGS = -Wall -Werror -pedantic -Iinclude
TARGET = opt_demo.exe

SRC = src/main.c src/logger.c src/worker.c

all: no_opt

no_opt:
	$(CC) $(CFLAGS) -O0 $(SRC) -o $(TARGET)

opt:
	$(CC) $(CFLAGS) -O2 $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all no_opt opt clean