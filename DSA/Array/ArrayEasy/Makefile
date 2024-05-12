#Variables
CC=g++
CCFLAGS= -Wall -g

all: SecondLargeNumber SecondSmallNumber ReverseArray RemoveDuplicates MissingNum FindSingleNumber \
TwoSumTarget BestTimeToBuySellStock MajorityElement FindMaxSubArray FindPivotIndex

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

MissingNum: MissingNum.o
	$(CC) -o MissingNum MissingNum.o

FindSingleNumber: FindSingleNumber.o
	$(CC) -o FindSingleNumber FindSingleNumber.o

TwoSumTarget: TwoSumTarget.o
	$(CC) -o TwoSumTarget TwoSumTarget.o

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
	rm -rf MissingNum
	rm -rf FindSingleNumber
	rm -rf TwoSumTarget
	rm -rf BestTimeToBuySellStock
	rm -rf MajorityElement
	rm -rf FindMaxSubArray
	rm -rf FindPivotIndex
	