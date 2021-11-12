/* Program to print N to 1  recursively */

#include <stdio.h>

/* Definition of function above main, can avoid function prototype */
void display(unsigned int n)
{
	if( n ){
	   printf("%d ",n); //prints the element of the stack, before moving down to n-1 element
	   display(n-1);   //recursively pushes (n-1) function call into the stack 
	}
	else
	   return;
	
}

int main(void)
{
	int num;
	printf("Enter a Value to generate display \n");
	scanf("%d",&num);
	display(num);

return 0;
}

