/* this file contains function for Merge sort alogrithms 
 *
 * The whole array/list is divided into 2-halfs, and 1 of the half is further 
 * divided into half and so on.. finally each of the element is sorted and merged
 *
 * This is also called Divide and Conquer stretegy
 */

#include <sortHeader.h>   /* declare private header */

/* demonstrate function definition
 * The body (alogrithm in C) for the particular functionality */

#define SIZE 10

void printfunc3(int[]);
void mergeSort(int[], int, int);
void mergeFunc(int[],int,int,int);

int i;

void merge()
{
	int i, array[10];	
	printf("Inside Merge Sort func \n");
	printf("Enter 10 Integer valuen\n");
	for( i=0; i<SIZE; i++)
        	scanf("%d",&array[i]);	

	printf("The Entered 10 Integer valuen are \n");
	printfunc3(array);

	mergeSort(array,0,SIZE);
	printf("The Merge Sorted Function : \n");
	printfunc3(array);

}

// merge sort function
void mergeSort(int array[],int low,int high)
{
        int mid;
        if( low>=high ) 
          return;

        mid=(low+high)/2;
        
	mergeSort(array,low,mid);  //Recursive call
        mergeSort(array,mid+1,high); //Recursive call
        mergeFunc(array,low,mid,high);
}

void mergeFunc(int array[],int low,int mid ,int high)
{
        int bray[20]; //same size of a[]
        int i,j,k;
        i=low,j=mid+1,k=low;

        while(i<=mid && j<=high)
        {
                if(array[i] <= array[j])
                    bray[k++] = array[i++];
                else
                   bray[k++] = array[j++]; //copying the elements 
        }

        while(i<=mid)
                bray[k++] = array[i++];

        while(j<=high)
		bray[k++] =array[j++];
        
	for (k=low; k<=high; k++)
                array[k] =bray[k];

}

void printfunc3(int array[])
{
        for( i=0; i<SIZE; i++)
                printf("%d ",array[i]);
}



