#Variables
CC=g++
CCFLAGS= -Wall -g

all: SecondLargeNumber SecondSmallNumber ReverseArray RemoveDuplicates MoveZeroAtEnd MissingNum MaxSubArray FindSingleNumber \
TwoSumTarget SortColors BestTimeToBuySellStock MajorityElement FindMaxSubArray FindPivotIndex

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

MaxSubArray: MaxSubArray.o
	$(CC) -o MaxSubArray MaxSubArray.o

FindSingleNumber: FindSingleNumber.o
	$(CC) -o FindSingleNumber FindSingleNumber.o

TwoSumTarget: TwoSumTarget.o
	$(CC) -o TwoSumTarget TwoSumTarget.o

SortColors: SortColors.o
	$(CC) -o SortColors SortColors.o
	
BestTimeToBuySellStock: BestTimeToBuySellStock.o
	$(CC) -o BestTimeToBuySellStock BestTimeToBuySellStock.o

MajorityElement: MajorityElement.o
	$(CC) -o MajorityElement MajorityElement.o

FindMaxSubArray: FindMaxSubArray.o
	$(CC) -o FindMaxSubArray FindMaxSubArray.o

FindPivotIndex: FindPivotIndex.o
	$(CC) -o FindPivotIndex FindPivotIndex.o
	
clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf SecondLargeNumber
	rm -rf SecondSmallNumber
	rm -rf ReverseArray
	rm -rf RemoveDuplicates
	rm -rf MoveZeroAtEnd
	rm -rf MissingNum
	rm -rf MaxSubArray
	rm -rf FindSingleNumber
	rm -rf TwoSumTarget
	rm -rf SortColors
	rm -rf BestTimeToBuySellStock
	rm -rf MajorityElement
	rm -rf FindMaxSubArray
	rm -rf FindPivotIndex
	