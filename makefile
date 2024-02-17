#compiler and TARGET
CC = gcc
TARGET = main

all:
	$(CC) main.c -o ./out/main
	out/main
clear:
	rm out/main