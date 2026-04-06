CC = g++
CCFLAGS = -std=c++17 -Wall -Wextra -O2
CC_SRC = hello.cpp

GCC = gcc
GCCFLAGS = -std=c11 -Wall -Wextra -O2
GCC_SRC = helloinc.c

TARGETS = hello helloinc

.PHONY: all clean run

all: $(TARGETS)

hello: $(CC_SRC)
	$(CC) $(CCFLAGS) $< -o $@

helloinc: $(GCC_SRC)
	$(GCC) $(GCCFLAGS) $< -o $@

run: hello
	./hello

clean:
	rm -f $(TARGETS)
