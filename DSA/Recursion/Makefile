#Variables
CC=g++
CCFLAGS= -Wall -g

all: FibonacciNumber FactorialNumber

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

FibonacciNumber: FibonacciNumber.o
	$(CC) -o FibonacciNumber FibonacciNumber.o

FactorialNumber: FactorialNumber.o
	$(CC) -o FactorialNumber FactorialNumber.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf FibonacciNumber
	rm -rf FactorialNumber