#Variables
CC=g++
CCFLAGS= -Wall -g

all: MoveZeroAtEnd MaxSubArray SortColors ThreeSum FindAvgSubArrThreshold

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

MoveZeroAtEnd: MoveZeroAtEnd.o
	$(CC) -o MoveZeroAtEnd MoveZeroAtEnd.o

MaxSubArray: MaxSubArray.o
	$(CC) -o MaxSubArray MaxSubArray.o

SortColors: SortColors.o
	$(CC) -o SortColors SortColors.o

ThreeSum: ThreeSum.o
	$(CC) -o ThreeSum ThreeSum.o

FindAvgSubArrThreshold: FindAvgSubArrThreshold.o
	$(CC) -o FindAvgSubArrThreshold FindAvgSubArrThreshold.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf MoveZeroAtEnd
	rm -rf MaxSubArray
	rm -rf SortColors	
	rm -rf ThreeSum
	rm -rf FindAvgSubArrThreshold