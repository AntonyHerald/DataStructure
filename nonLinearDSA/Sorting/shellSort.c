/* this file contains function for shell sort alogrithms */

#include <sortHeader.h>   /* declare private header */

/* demonstrate function definition
 * The body (alogrithm in C) for the particular functionality */

void shell()
{
	int i, j, array[10];	
	printf("Inside Shell Sort func \n");
	printf("Enter 10 Integer valuen\n");
	for( i=0; i<10; i++)
        	scanf("%d",&array[i]);	

	printf("The Entered 10 Integer valuen are \n");
	for( i=0; i<10; i++)
        	printf("%d ",array[i]);	

}




