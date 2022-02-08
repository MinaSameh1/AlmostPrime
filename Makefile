binary= almostprime.out
CXX_FLAGS= -pedantic \
					 -Wall \
					 -Wextra \
					 -Werror -Wfloat-equal \
					 -Wmissing-declarations \
					 -Wunreachable-code \
					 -Wunused \
					 -Wunused-parameter \
					 -Wimport
CXX_DEBUG_FLAGS= -g -O0

all: clean main run

main: 
	g++ $(CXX_FLAGS) -o $(binary) almost_prime.cpp

run:
	./almostprime.out

clean:
	rm -v $(binary)

debug: clean
	g++ -o $(binary) $(CXX_FLAGS) $(CXX_DEBUG_FLAGS) almost_prime.cpp 
