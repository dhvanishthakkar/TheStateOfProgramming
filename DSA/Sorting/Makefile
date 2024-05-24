#Variables
CC=g++
CCFLAGS= -Wall -g

all: BubbleSort SelectionSort InsertionSort QuickSort MergeSort

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

BubbleSort: BubbleSort.o
	$(CC) -o BubbleSort BubbleSort.o

SelectionSort: SelectionSort.o
	$(CC) -o SelectionSort SelectionSort.o

InsertionSort: InsertionSort.o
	$(CC) -o InsertionSort InsertionSort.o

QuickSort: QuickSort.o
	$(CC) -o QuickSort QuickSort.o

MergeSort: MergeSort.o
	$(CC) -o MergeSort MergeSort.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf BubbleSort
	rm -rf SelectionSort
	rm -rf InsertionSort
	rm -rf QuickSort
	rm -rf MergeSort
