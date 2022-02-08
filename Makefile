binaries= almost_prime almost_debug
CXX_FLAGS= -pedantic -Wall -Wextra -Werror -Wfloat-equal
CXX_DEBUG_FLAGS= -g -O0 -Wcast-qual -Wnoexcept -Wmissing-declarations -Wundef

all: clean main run

main: 
	g++ $(CXX_FLAGS) -o almost_prime almost_prime.cpp

run:
	./almost_prime

clean:
	rm -f $(binaries) *.o

debug:
	g++ -o almost_debug $(CXX_FLAGS) $(CXX_DEBUG_FLAGS) almost_prime.cpp 
