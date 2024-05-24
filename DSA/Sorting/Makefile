#Variables
CC=g++
CCFLAGS= -Wall -g

all: BubbleSort SelectionSort InsertionSort

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

BubbleSort: BubbleSort.o
	$(CC) -o BubbleSort BubbleSort.o

SelectionSort: SelectionSort.o
	$(CC) -o SelectionSort SelectionSort.o

InsertionSort: InsertionSort.o
	$(CC) -o InsertionSort InsertionSort.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf BubbleSort
	rm -rf SelectionSort
	rm -rf InsertionSort
