/* Program to print 1 to N recursively */

#include <stdio.h>

/* Definition of function above main, can avoid function prototype */
void display(unsigned int n)
{
	if( n ){
	   display(n-1);   //recursively pushes (n-1) function call into the stack 
	   printf("%d ",n); //printing of results is done, on the way back from the stack
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

