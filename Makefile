CC := gcc
CFLAGS := -Wall -Wextra -g
LDFLAGS := -I include/
LIBDIR := lib

.PHONY: all
all: mrproper $(LIBDIR)/libconsole.a

$(LIBDIR)/console.o: src/console.c
	mkdir -p $(LIBDIR)
	$(CC) -c $< -o $@ $(CFLAGS) $(LDFLAGS)

$(LIBDIR)/libconsole.a: $(LIBDIR)/console.o
	ar -q $@ $<

.PHONY: examples
examples: rainbow circles

circles: examples/circles.c
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) -L lib/ -lconsole

rainbow: examples/rainbow.c
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) -L lib/ -lconsole

.PHONY: mrproper
mrproper:
	rm -f rainbow
	rm -rf $(LIBDIR)

.PHONY: clean
clean:
	rm -f $(LIBDIR)/*.o
	rm -f rainbow circles
