CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -O2
SRCDIR = .

# discover sources
CPP_SRCS := $(wildcard $(SRCDIR)/*.cpp)
C_SRCS := $(wildcard $(SRCDIR)/*.c)

# targets match source basenames
CPP_TARGETS := $(patsubst $(SRCDIR)/%.cpp,%,$(CPP_SRCS))
C_TARGETS := $(patsubst $(SRCDIR)/%.c,%,$(C_SRCS))

TARGETS := $(CPP_TARGETS) $(C_TARGETS)

.PHONY: all clean run

all: $(TARGETS)

$(CPP_TARGETS): %: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

$(C_TARGETS): %: %.c
	$(CC) $(CFLAGS) $< -o $@

run: hello
	./hello

clean:
	rm -f $(TARGETS)
