#Variables
CC=g++
CCFLAGS= -Wall -g

all: FindNumEvenOdd CountDigitInt FindAllDivisor FindMissingNum

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

FindNumEvenOdd: FindNumEvenOdd.o
	$(CC) -o FindNumEvenOdd FindNumEvenOdd.o

CountDigitInt: CountDigitInt.o
	$(CC) -o CountDigitInt CountDigitInt.o

FindAllDivisor: FindAllDivisor.o
	$(CC) -o FindAllDivisor FindAllDivisor.o

FindMissingNum: FindMissingNum.o
	$(CC) -o FindMissingNum FindMissingNum.o
clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf FindNumEvenOdd
	rm -rf CountDigitInt
	rm -rf FindAllDivisor
	rm -rf FindMissingNum

