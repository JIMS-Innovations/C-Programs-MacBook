
CC = gcc
CFLAGS = -Wall -g
TARGET = dev-1.c
OUTPUT = dev-1

all:
	$(CC) $(CFLAGS) $(TARGET) -o $(OUTPUT) 

clean: 
	rm -f dev-1