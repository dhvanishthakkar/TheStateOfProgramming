#Variables
CC=g++
CCFLAGS= -Wall -g

all: CountingBits SingleNumber GetOddOccurrence ConvertNumToHex

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

CountingBits: CountingBits.o
	$(CC) -o CountingBits CountingBits.o

SingleNumber: SingleNumber.o
	$(CC) -o SingleNumber SingleNumber.o

GetOddOccurrence: GetOddOccurrence.o
	$(CC) -o GetOddOccurrence GetOddOccurrence.o

ConvertNumToHex: ConvertNumToHex.o
	$(CC) -o ConvertNumToHex ConvertNumToHex.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf CountingBits
	rm -rf SingleNumber
	rm -rf GetOddOccurrence
	rm -rf ConvertNumToHex
