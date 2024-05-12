#Variables
CC=g++
CCFLAGS= -Wall -g

all: MoveZeroAtEnd MaxSubArray SortColors

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

MoveZeroAtEnd: MoveZeroAtEnd.o
	$(CC) -o MoveZeroAtEnd MoveZeroAtEnd.o

MaxSubArray: MaxSubArray.o
	$(CC) -o MaxSubArray MaxSubArray.o

SortColors: SortColors.o
	$(CC) -o SortColors SortColors.o
	
clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf MoveZeroAtEnd
	rm -rf MaxSubArray
	rm -rf SortColors	