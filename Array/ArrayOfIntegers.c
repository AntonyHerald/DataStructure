/* demonstrate simple 1D and 2D array 
 * Arrays are part of Linear(Sequenial array) 
 * of any data time - 
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10  //Note this size can be modified as per the requirement

void singleDim(int[], int);
void doubleDim(int[][SIZE], int);
int sz;

int main()
{
	int size, arrSingle[SIZE], arrDouble[SIZE][SIZE];

	printf("Enter the size of the array \n");
	scanf("%d",&size);
	sz = size;

	singleDim(arrSingle, size);
	doubleDim(arrDouble, size);

	return 0;
}

void singleDim(int arr[], int sz)
{
	int i, j;
	printf("Inside Single Dim Array \n");

	printf("Enter %d Element for SingleDim Array \n",sz);
	for (i=0;  i<sz; i++)
		scanf("%d",&arr[i]);
		
	printf("The Entered Element for SingleDim Array \n");
	for (i=0; i<sz; i++)
		printf("%d ",arr[i]);

	printf("\n");
}

void doubleDim(int arr[][sz], int sz)
{
	int i, j;
	printf("Inside Double Dim Array \n");

	printf("Enter %d Element for DoubleDim Array \n",sz*sz);
	for (i=0; i<sz; i++)
	{
		for(j=0; j<sz; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		
	printf("The Entered Element for DoubleDim Array \n");
	for (i=0; i<sz; i++)
	{
		for(j=0; j<sz; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
	
	




