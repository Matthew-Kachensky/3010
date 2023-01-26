COMP = g++

FLAGS = -std=c++2a -Werror

all: main test

main: main.cpp
	$(COMP) $(FLAGS) main.cpp -o main

test: test.cpp
	$(COMP) $(FLAGS) test.cpp -o test



clean:
	rm test main