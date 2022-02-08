binaries= almostprime.out almostdebug.out
CXX_FLAGS= -pedantic -Wall -Wextra -Werror -Wfloat-equal
CXX_DEBUG_FLAGS= -g -O0 -Wcast-qual -Wnoexcept -Wmissing-declarations -Wundef

all: clean main run

main: 
	g++ $(CXX_FLAGS) -o almostprime.out almost_prime.cpp

run:
	./almostprime.out

clean:
	rm -f $(binaries) *.o

debug:
	g++ -o almostdebug.out $(CXX_FLAGS) $(CXX_DEBUG_FLAGS) almost_prime.cpp 
