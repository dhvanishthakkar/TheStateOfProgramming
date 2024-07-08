#Variables
CC=g++
CCFLAGS= -Wall -g

all: FibonacciNumber FactorialNumber ValidPalindrome ClimbStair MinCostToClimbStair FindPowers Permutation

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

FindPowers: FindPowers.o
	$(CC) -o FindPowers FindPowers.o

Permutation: Permutation.o
	$(CC) -o Permutation Permutation.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf FibonacciNumber
	rm -rf FactorialNumber
	rm -rf ValidPalindrome
	rm -rf ClimbStair
	rm -rf MinCostToClimbStair
	rm -rf FindPowers
	rm -rf Permutation
	