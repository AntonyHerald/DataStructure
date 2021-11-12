/* this file contains function for bubble sort alogrithms */

#include "sortHeader.h"   /* declare private header */
#include <stdio.h> /* standard header */

/* demonstrate function definition
 *
 1* The body (alogrithm in C) for the particular functionality 
 2* We will discuss a simple optimization technique 
 3* Also analyze "Time Complexity" - meaning the time taking for execution 
*/

#define SIZE 100
void printfunc1(int[], int);
int i, j; 


void bubble()
{
	int nsize, temp,  array[SIZE], flag = 0;
	
	printf("Inside Bubble Sort func \n");
	printf("Enter Range of Elements to store in array [SIZE-100] value\n");
	scanf("%d",&nsize);

	for( i=0; i<nsize; i++)
        	scanf("%d",&array[i]);	

	printf("Entered Integer values are \n");
        printfunc1(array, nsize);

	for(i=0; i < (nsize-1);i++) //We dont need to check for the last element, as it will be last & sorted
	{
		for(j=0; j < (nsize-i-1);j++) //if nsize=10, i=1, then 10-1-1 = 8 
		//then swap is called 
		{
		       temp = array[i];
		   array[j] = array[j+1];
		 array[j+1] = temp;
		 flag = 1;
		}

	}
	printf("\n\nThe Bubble Sorted Elements \n");
        printfunc1(array, nsize);
}

void printfunc1(int array[], int nsize)
{
        for( i=0; i<nsize; i++)
                printf("%d ",array[i]);

}





