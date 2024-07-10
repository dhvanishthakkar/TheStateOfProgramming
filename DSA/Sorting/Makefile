#Variables
CC=g++
CCFLAGS= -Wall -g

all: BubbleSort SelectionSort InsertionSort QuickSort MergeSort SavePatients MaxBuildSpeed CountInversion MergeMultipleSortedArray

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

SavePatients: SavePatients.o
	$(CC) -o SavePatients SavePatients.o
 
MaxBuildSpeed: MaxBuildSpeed.o
	$(CC) -o MaxBuildSpeed MaxBuildSpeed.o
	
CountInversion: CountInversion.o
	$(CC) -o CountInversion CountInversion.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf BubbleSort
	rm -rf SelectionSort
	rm -rf InsertionSort
	rm -rf QuickSort
	rm -rf MergeSort
	rm -rf SavePatients
	rm -rf MaxBuildSpeed
	rm -rf CountInversion
	rm -rf MergeMultipleSortedArray
