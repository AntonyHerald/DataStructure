/* this file contains function for selection sort alogrithms */

#include <sortHeader.h>   /* declare private header */

/* demonstrate function definition
 * The body (alogrithm in C) for the particular functionality */

#define size 10

void printfunc(int[]);
int i, j;

void selection()
{
	int i, j, array[10];	
	int initPos, temp;
	printf("Selection Sort \n");

	printf("Enter 10 Integer Ramdom values \n");
	for( i=0; i<size; i++)
        	scanf("%d",&array[i]);	

	printf("The Entered 10 Integer valuen are \n");
	printfunc(array);

	//selection sort Algorithm 
	for(i=0; i<size; i++)
	{
		initPos = i;  //set initial position
		for(j = i; j<size; j++)
		{
			if(array[initPos] > array[j])
			{
			  initPos = j;
			}

			if(initPos != i)
			{
				     temp      = array[i];
				     array [i] = array[initPos];
				array[initPos] = temp;
			}
		}
	}
        printf("\n\nThe Sorted Elements \n");
        printfunc(array);

	return ;

}


void printfunc(int array[])
{
	for( i=0; i<size; i++)
        	printf("%d ",array[i]);	

}







