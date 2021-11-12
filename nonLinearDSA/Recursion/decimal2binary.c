/* Program to convert Decimal to binary */

#include <stdio.h>

void display(unsigned int n)
{
      if (n > 1)
        display(n/2);

      printf("%d", n % 2);
}

int main(void)
{
	int n;
	printf("Enter Decimal Number to find Binary \n");
	scanf("%d",&n);
	display(n);

	printf("\n");
return 0;
}


