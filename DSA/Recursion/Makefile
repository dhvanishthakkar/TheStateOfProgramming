#Variables
CC=g++
CCFLAGS= -Wall -g

all: FibonacciNumber FactorialNumber ValidPalindrome ClimbStair MinCostToClimbStair

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

FibonacciNumber: FibonacciNumber.o
	$(CC) -o FibonacciNumber FibonacciNumber.o

FactorialNumber: FactorialNumber.o
	$(CC) -o FactorialNumber FactorialNumber.o

ValidPalindrome: ValidPalindrome.o
	$(CC) -o ValidPalindrome ValidPalindrome.o

ClimbStair: ClimbStair.o
	$(CC) -o ClimbStair ClimbStair.o
	
MinCostToClimbStair: MinCostToClimbStair.o
	$(CC) -o MinCostToClimbStair MinCostToClimbStair.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf FibonacciNumber
	rm -rf FactorialNumber
	rm -rf ValidPalindrome
	rm -rf ClimbStair
	rm -rf MinCostToClimbStair
	