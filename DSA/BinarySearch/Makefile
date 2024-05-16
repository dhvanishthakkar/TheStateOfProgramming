#Variables
CC=g++
CCFLAGS= -Wall -g

all: FairCandySwap BinarySearch RotatedSortArray FindCapacityToShip MinDayMakeBouquets

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

FairCandySwap: FairCandySwap.o
	$(CC) -o FairCandySwap FairCandySwap.o

BinarySearch: BinarySearch.o
	$(CC) -o BinarySearch BinarySearch.o

RotatedSortArray: RotatedSortArray.o
	$(CC) -o RotatedSortArray RotatedSortArray.o

FindCapacityToShip: FindCapacityToShip.o
	$(CC) -o FindCapacityToShip FindCapacityToShip.o

MinDayMakeBouquets: MinDayMakeBouquets.o
	$(CC) -o MinDayMakeBouquets MinDayMakeBouquets.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf FairCandySwap
	rm -rf BinarySearch
	rm -rf RotatedSortArray
	rm -rf FindCapacityToShip
	rm -rf MinDayMakeBouquets
