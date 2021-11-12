/* 
 * This program demonstrates the stack 
 * Stack is a container of data/object which insert and removed of
 * data in LIFO principle (Last In First Out)
 *
 * Please note its for the functionality provided by the user
 * to implement data insert and removed in LIFO fashion
 */

#include <stdio.h>

void push();
void pop();
void display();

#define TOP 5
#define SIZE TOP

/* Implementation of stack using array */
int stackArray[SIZE];  

static int counter = -1;

int main()
{
	int choice;

	do{
		printf("Stack Menu \n");
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");
		printf("Enter a Choice \n");
		scanf("%d",&choice);

	     switch(choice)
	     {
		case 1: { push(); break; }
		case 2: { pop(); break; }
		case 3: { display(); break; }
		default : { printf("Invalid choice \n"); break; }
	     }
	}while(choice != 4);
  return 0;
}

void push()
{
	printf("Inside Push function \n");

	if(counter > TOP)
	{
		printf("Stack is full \n");
	}
	else
	{
		printf("Enter a value to push into stack \n");
		scanf("%d",&stackArray[counter]);
		counter++;
	}
}

void pop()
{
	printf("Inside PoP function \n");

	if(counter < TOP)
	{
		printf("Stack is NOT full \n");
	}
	else
	{	//this will print the current TOP value of the stack
		printf("The Popped Value of Stack is %d \n",stackArray[counter]);
		counter--;
	}
}

void display()
{
	int i;
	printf("Display the Elements of the Stack \n");

	if(counter >= TOP)
	{
	    for(i=TOP; i>=0; i--)
		printf("%d ",stackArray[i]);
	}
	else
	{
	    printf("Stack is not full \n");
	}
}

	



	





