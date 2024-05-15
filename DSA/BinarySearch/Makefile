#Variables
CC=g++
CCFLAGS= -Wall -g

all: FairCandySwap BinarySearch

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

FairCandySwap: FairCandySwap.o
	$(CC) -o FairCandySwap FairCandySwap.o

BinarySearch: BinarySearch.o
	$(CC) -o BinarySearch BinarySearch.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf FairCandySwap
	rm -rf BinarySearch
