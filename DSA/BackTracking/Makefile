#Variables
CC=g++
CCFLAGS= -Wall -g

all:  N_Queens FindPermutations FindSubsets

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

N_Queens: N_Queens.o
	$(CC) -o N_Queens N_Queens.o

FindPermutations: FindPermutations.o
	$(CC) -o FindPermutations FindPermutations.o

FindSubsets: FindSubsets.o
	$(CC) -o FindSubsets FindSubsets.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf N_Queens
	rm -rf FindPermutations
	rm -rf FindSubsets