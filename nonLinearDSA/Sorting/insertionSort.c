/* this file contains function for Insertion sort alogrithms */

#include <sortHeader.h>   /* declare private header */

/* demonstrate function definition
 * The body (alogrithm in C) for the particular functionality */

#define size 10

void printfunc2(int[]);
int i, j;

void insertion()
{
	int key,  array[size];	
	
	printf("Inside insertion Sort func \n");
	printf("Enter 10 Integer valuen\n");
	for( i=0; i<size; i++)
        	scanf("%d",&array[i]);	

	printf("The Entered 10 Integer value are \n");
	printfunc2(array);

	for(i=1; i<size;i++)
	{
		key = array[i];
		j = (i-1);

	/* Compare the key(value with each of the elements on the left handside
	 * until an element smaller than is found
	 * for desending order, change key < array[j] to key>array[j] */

		while( key < array[j] && j >=0)
		{
			array[j+1] = array[j];
			j--;
		}//while end
		array[j+1] = key;
	}
	printf("\n\nThe Sorted Elements \n");
        printfunc2(array);

}

void printfunc2(int array[])
{
        for( i=0; i<size; i++)
                printf("%d ",array[i]);

}



