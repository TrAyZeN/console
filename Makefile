CC := gcc
CFLAGS := -Wall -Wextra -g
LDFLAGS := -I include/

.PHONY: all
all: mrproper examples

.PHONY: examples
examples: rainbow

rainbow: src/*.c examples/rainbow.c
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS)

.PHONY: mrproper
mrproper:
	rm -f $(EXEC)
