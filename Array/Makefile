#Variables
CC=g++
CCFLAGS= -Wall -g

all: BinarySearch ArrayReverse RemoveDuplicates BubbleSort InsertionSort SelectionSort FindLowerBound ClosestSum

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

BinarySearch: BinarySearch.o
	$(CC) -o BinarySearch BinarySearch.o

ArrayReverse: ArrayReverse.o
	$(CC) -o ArrayReverse ArrayReverse.o

RemoveDuplicates: RemoveDuplicates.o
	$(CC) -o RemoveDuplicates RemoveDuplicates.o
	
FindLowerBound: FindLowerBound.o
	$(CC) -o FindLowerBound FindLowerBound.o
	
ClosestSum: ClosestSum.o
	$(CC) -o ClosestSum ClosestSum.o

#KadanesAlgorithm: KadanesAlgorithm.o
#	$(CC) -o KadanesAlgorithm KadanesAlgorithm.o

BubbleSort: BubbleSort.o
	$(CC) -o BubbleSort BubbleSort.o

InsertionSort: InsertionSort.o
	$(CC) -o InsertionSort InsertionSort.o

SelectionSort: SelectionSort.o
	$(CC) -o SelectionSort SelectionSort.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf BinarySearch
	rm -rf ArrayReverse
	rm -rf RemoveDuplicates
#	rm -rf FindLowerBound.cpp
#	rm -rf ClosestSum.cpp
#	rm -rf KadanesAlgorithm.cpp
	rm -rf BubbleSort.cpp
	rm -rf InsertionSort.cpp
	rm -rf SelectionSort.cpp
