#Variables
CC=g++
CCFLAGS= -Wall -g

all: BubbleSort SelectionSort

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

BubbleSort: BubbleSort.o
	$(CC) -o BubbleSort BubbleSort.o

SelectionSort: SelectionSort.o
	$(CC) -o SelectionSort SelectionSort.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf BubbleSort
	rm -rf SelectionSort