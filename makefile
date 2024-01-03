CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = example.c zambretti.c
OUT = zambretti_example

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(OUT)
