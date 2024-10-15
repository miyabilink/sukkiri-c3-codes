CC = gcc
PGNAME = mainapp
OBJS = akagi.o misaki.o
OBJST = code1514.o

$(PGNAME): $(OBJS)
	$(CC) -o $@ $^

List1514: $(OBJST)
	$(CC) -o $@ $^

.c.o:
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(PGNAME) $(OBJS) $(OBJST)

.PHONY: test
test: code1514
	./code1514

.PHONY: doc
doc:
	doxygen

.PHONY: all
all: clean $(PGNAME) test doc
