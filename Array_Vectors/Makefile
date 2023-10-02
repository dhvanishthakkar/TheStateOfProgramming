#Variables
CC=g++
CCFLAGS= -Wall -g

all: ArrayReverse BinarySearch PrefixSum KadanesAlgorithm RemoveDuplicates BubbleSort InsertionSort SelectionSort CountSort FindLowerBound ClosestSum

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

ArrayReverse: ArrayReverse.o
	$(CC) -o ArrayReverse ArrayReverse.o

BinarySearch: BinarySearch.o
	$(CC) -o BinarySearch BinarySearch.o

PrefixSum: PrefixSum.o
	$(CC) -o PrefixSum PrefixSum.o

RemoveDuplicates: RemoveDuplicates.o
	$(CC) -o RemoveDuplicates RemoveDuplicates.o
	
FindLowerBound: FindLowerBound.o
	$(CC) -o FindLowerBound FindLowerBound.o
	
ClosestSum: ClosestSum.o
	$(CC) -o ClosestSum ClosestSum.o

KadanesAlgorithm: KadanesAlgorithm.o
	$(CC) -o KadanesAlgorithm KadanesAlgorithm.o

BubbleSort: BubbleSort.o
	$(CC) -o BubbleSort BubbleSort.o

InsertionSort: InsertionSort.o
	$(CC) -o InsertionSort InsertionSort.o

SelectionSort: SelectionSort.o
	$(CC) -o SelectionSort SelectionSort.o

CountSort: CountSort.o
	$(CC) -o CountSort CountSort.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf ArrayReverse
	rm -rf BinarySearch
	rm -rf PrefixSum
	rm -rf KadanesAlgorithm
	rm -rf RemoveDuplicates
	rm -rf FindLowerBound
	rm -rf ClosestSum
	rm -rf BubbleSort
	rm -rf InsertionSort
	rm -rf SelectionSort
	rm -rf CountSort