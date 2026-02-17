CC = gcc

CFLAGS = -Wall -Werror -pedantic -Iinclude -g	
CFLAGS += $(shell pkg-config --cflags libcurl)

LDFLAGS = $(shell pkg-config --libs libcurl)

SRC = src/main.c src/logger.c src/http_client.c
OBJ = $(SRC:.c=.o)

TARGET = http_monitor.exe

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

clean:
	rm -f src/*.o $(TARGET)

.PHONY: all clean