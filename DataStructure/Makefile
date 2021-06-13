#Variables
CC=g++
CCFLAGS= -Wall -Werror -g

all: output

%.o: %.cpp
	$(CC) -c $(CCFLAGS) $<

output: main.o SinglyLinkList.o
	$(CC) -o output main.o SinglyLinkList.o 

#test: output
#	./output

clean:
	rm -rf $(OBJS)