#include <sortHeader.h>

int main(void)
{
  int choice;

  do{
        printf("\n======== Menu ==========");
	printf("\n1. selection sort ");
	printf("\n2. Insertion sort ");
	printf("\n3. Bubble sort ");
	printf("\n4. Merger sort ");
	printf("\n5. Shell sort ");
	printf("\n6. Quick sort ");
	printf("\n7. Exit ");
	
	printf("\n Please Enter your choice of sort ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: selection(); break;
		case 2: insertion(); break;
		case 3: bubble(); break;
		case 4: merge(); break;
		case 5: shell(); break;
		case 6: quick(); break;
		case 7: exit(0); break;
		default: printf("\nWrong key pressed");
	}
     }while(1);

     printf("The Sort Program Ends here \n");

}//end of main


 	




