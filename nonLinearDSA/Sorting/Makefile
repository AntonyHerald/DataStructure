CC=gcc
CFLAGS=-I. -Wall -g
RM=rm

sort: mainSort.o selectionSort.o bubbleSort.o insertionSort.o mergeSort.o quickSort.o shellSort.o
	$(CC) $(CFLAGS) mainSort.o selectionSort.o bubbleSort.o insertionSort.o mergeSort.o quickSort.o shellSort.o -o sort

mainSort.o: mainSort.c
	$(CC) $(CFLAGS) -c mainSort.c

selectionSort.o: selectionSort.c
	$(CC) $(CFLAGS) -c selectionSort.c

bubbleSort.o: bubbleSort.c 
	$(CC) $(CFLAGS) -c bubbleSort.c

insertionSort.o: insertionSort.c
	$(CC) $(CFLAGS) -c insertionSort.c

mergeSort.o: mergeSort.c
	$(CC) $(CFLAGS) -c mergeSort.c

quickSort.o: quickSort.c
	$(CC) $(CFLAGS) -c quickSort.c

shellSort.o: shellSort.c
	$(CC) $(CFLAGS) -c shellSort.c

clean:
	rm *.o sort


