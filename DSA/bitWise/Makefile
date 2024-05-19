#Variables
CC=g++
CCFLAGS= -Wall -g

all: CountingBits SingleNumber GetOddOccurrence ConvertNumToHex FindNumPowerOfTwo SingleNumber_2

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

FindNumPowerOfTwo: FindNumPowerOfTwo.o
	$(CC) -o FindNumPowerOfTwo FindNumPowerOfTwo.o

SingleNumber_2: SingleNumber_2.o
	$(CC) -o SingleNumber_2 SingleNumber_2.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf CountingBits
	rm -rf SingleNumber
	rm -rf GetOddOccurrence
	rm -rf ConvertNumToHex
	rm -rf FindNumPowerOfTwo
	rm -rf SingleNumber_2
