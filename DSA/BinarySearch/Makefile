#Variables
CC=g++
CCFLAGS= -Wall -g

all: FairCandySwap

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

MoveZeroAtEnd: FairCandySwap.o
	$(CC) -o FairCandySwap FairCandySwap.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf FairCandySwap
