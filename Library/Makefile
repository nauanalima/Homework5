CC=gcc
CFLAGS=-I. -O2
DEPS=linalg.h
OBJ=main.o 
TARGET=main
LIBS=-lm

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
rm $(OBJ)