CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -O2
SRCDIR = .

# discover sources
CPP_SRCS := $(wildcard $(SRCDIR)/*.cpp)
C_SRCS := $(wildcard $(SRCDIR)/*.c)/

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
#이 파일은 C++과 C 소스 파일을 컴파일하여 실행 가능한 프로그램을 만드는 Makefile입니다. `g++`와 `gcc`를 사용하여 각각 C++과 C 소스 파일을 컴파일합니다. `all` 타겟은 모든 소스 파일을 컴파일하여 실행 가능한 프로그램을 생성하며, `clean` 타겟은 생성된 실행 파일을 삭제합니다. `run` 타겟은 `hello`라는 실행 파일을 실행합니다.
