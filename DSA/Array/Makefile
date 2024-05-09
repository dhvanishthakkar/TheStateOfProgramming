#Variables
CC=g++
CCFLAGS= -Wall -g

all: SecondLargeNumber SecondSmallNumber ReverseArray RemoveDuplicates MoveZeroAtEnd MissingNum

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

SecondLargeNumber: SecondLargeNumber.o
	$(CC) -o SecondLargeNumber SecondLargeNumber.o

SecondSmallNumber: SecondSmallNumber.o
	$(CC) -o SecondSmallNumber SecondSmallNumber.o

ReverseArray: ReverseArray.o
	$(CC) -o ReverseArray ReverseArray.o

RemoveDuplicate: RemoveDuplicate.o
	$(CC) -o RemoveDuplicates RemoveDuplicates.o

MoveZeroAtEnd: MoveZeroAtEnd.o
	$(CC) -o MoveZeroAtEnd MoveZeroAtEnd.o

MissingNum: MissingNum.o
	$(CC) -o MissingNum MissingNum.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf SecondLargeNumber
	rm -rf SecondSmallNumber
	rm -rf ReverseArray
	rm -rf RemoveDuplicates
	rm -rf MoveZeroAtEnd
	rm -rf MissingNum
