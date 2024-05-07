#Variables
CC=g++
CCFLAGS= -Wall -g

all: BinarySearchArray BinarySearchVctr BubbleSort InbuiltSorting LargestElement LargestSumSubArray MaxSumSubArray PrefixSumLargSubArr PrintArrPairs PrintSubArray ReverseArray SinglyLinkList SelectionSort Vector

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

BinarySearchArray: BinarySearchArray.o
	$(CC) -o BinarySearchArray BinarySearchArray.o

BinarySearchVctr: BinarySearchVctr.o
	$(CC) -o BinarySearchVctr BinarySearchVctr.o

BubbleSort: BubbleSort.o
	$(CC) -o BubbleSort BubbleSort.o

InbuiltSorting: InbuiltSorting.o
	$(CC) -o InbuiltSorting InbuiltSorting.o 

LargestElement: LargestElement.o
	$(CC) -o LargestElement LargestElement.o

LargestSumSubArray: LargestSumSubArray.o
	$(CC) -o LargestSumSubArray LargestSumSubArray.o
	
MaxSumSubArray: MaxSumSubArray.o
	$(CC) -o MaxSumSubArray MaxSumSubArray.o
	
PrefixSumLargSubArr: PrefixSumLargSubArr.o
	$(CC) -o PrefixSumLargSubArr PrefixSumLargSubArr.o
	
PrintArrPairs: PrintArrPairs.o
	$(CC) -o PrintArrPairs PrintArrPairs.o
	
PrintSubArray: PrintSubArray.o
	$(CC) -o PrintSubArray PrintSubArray.o

ReverseArray: ReverseArray.o
	$(CC) -o ReverseArray ReverseArray.o

SinglyLinkList: SinglyLinkList.o
	$(CC) -o SinglyLinkList SinglyLinkList.o

SelectionSort: SelectionSort.o
	$(CC) -o SelectionSort SelectionSort.o
	
Vector: Vector.o
	$(CC) -o Vector Vector.o

clean:
	rm -rf $(OBJS)
	rm -rf *.o
	rm -rf BinarySearchArray
	rm -rf BinarySearchVctr
	rm -rf BubbleSort
	rm -rf CommonDefines
	rm -rf InbuiltSorting
	rm -rf InsertionSort
	rm -rf LargestElement
	rm -rf LargestSumSubArray
	rm -rf MaxSumSubArray
	rm -rf PrefixSumLargSubArr
	rm -rf PrintArrPairs
	rm -rf PrintSubArray
	rm -rf ReverseArray
	rm -rf SinglyLinkList
	rm -rf SelectionSort
	rm -rf Vector
