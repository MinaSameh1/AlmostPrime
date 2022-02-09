binary= almostprime.out
TestBin= almosttest.out
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
CC= g++ 

all: main run

main: AlmostPrimeSubmit.cpp
	$(CC) $(CXX_FLAGS) -o $(binary) main.cpp

run:
	./almostprime.out

test: almostPrime.o almostPrime.test.cpp
	$(CC) $(CXX_FLAGS) almostPrime.o -o $(TestBin) almostPrime.test.cpp
	./almosttest.out

almostPrime.o: almostPrime.cpp
	$(CC) -g -c almostPrime.cpp -o almostPrime.o


clean:
	rm f *.o $(binary) $(TestBin)

debug: AlmostPrimeSubmit.cpp
	g++ -o $(binary) $(CXX_FLAGS) $(CXX_DEBUG_FLAGS) main.cpp 
