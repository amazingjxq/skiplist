CC=g++
CFLAGS=-Wall --std=c++0x
OBJ=skiplist.o
DEPS=skiplist.h

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

default: all

all: libskiplist.a

libskiplist.a: $(OBJ)
	ar rcs $@ $<

clean:
	-rm -rf $(OBJ) libskiplist.a
