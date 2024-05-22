#Variables
CC=g++
CCFLAGS= -Wall -g

all:  N_Queens

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

N_Queens: N_Queens.o
	$(CC) -o N_Queens N_Queens.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	N_Queens