/* 
 * This program demonstrates Single LinkedList  
 * Operation are - Create, Insert, Delete, & Display (Traversal)
 * This alogrithm can be applied to any user defined dataTypes
 *
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int info;
	struct node *next;
}node;

void create(void);
void insert(void);  //insert start, specific position & end
void delete(void);
void display(void); //also known as Traversal

node *ptr   = NULL;
node *start = NULL;
node *tail  = NULL;
node *head  = NULL;
node *new   = NULL;

int main(void)
{
  int choice;

  system("cls");
  do{
        printf("\n===Single Linked List ==");
        printf("\n======== Menu ==========");
	printf("\n1. Create ");
	printf("\n2. Insert ");
	printf("\n3. Delete ");
	printf("\n4. Display/Traverse ");
	printf("\n5. Exit ");
	
	printf("\n Please Enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: create(); break;
		case 2: insert(); break;
		case 3: delete(); break;
		case 4: display(); break;
		case 5: exit(0); break;
		default: printf("\nWrong key pressed");
	}
     }while(1); 
}//end of main

void create()
{
	printf("\n -----------------------------");
	printf("\n Inside create ");
	printf("\n -----------------------------");
	new = (node*) malloc(sizeof(node));
        if(new==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
        printf("\nEnter New Node Value : ");
        scanf("%d",&new->info);

        new->next=NULL;
        if(start==NULL)
        {
                head=start=new;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=new;
        }
}

void insert()
{
	int count, pos;
	count=1;
	
	printf("\n Inside Insert ");
	
	new = (node*) malloc(sizeof(node));
        if(new==NULL)
        {
                printf("nOut of Memory Space:n");
                exit(0);
        }
	printf("\nEnter New Node Value : ");
        scanf("%d",&new->info);
	printf("\nEnter Node  Position : ");
        scanf("%d",&pos);

	new->next=NULL;
	
	/* insertion algorithm takes care inserting based on the position */
        if( pos == count )
	{
		start=new;
		start->next = head; //head will have old start addr
		head=start;  //when inserted in front, head should get assigned with *new addr  
        }
        else
        {
		count=2;
		ptr=start;
                while (ptr->next!=NULL) 
		{
			if (pos == count)
			 {
				 new->next = ptr->next;
				 ptr->next = new;
			 }
			ptr = ptr->next;
			count++;
		}
        }
}	

void delete()
{
	int pos, nodeDel;

	printf("\nInside delete ");
	printf("\nEnter the Position of Node to be deleted :  \n");
	scanf("%d",&nodeDel);

	if(nodeDel == 1){
		head = head->next;
        }
	else{
		pos=2;
		ptr = head;
		printf("position value --> %d",pos);
		do{
		    if(nodeDel == pos){
			  printf("successfully Deleted\n");
			  ptr = ptr->next;
			  break;
		    }
		  pos++;
		}while(ptr->next != NULL);
	}
}	

void display()
{
	int pos = 1;
	printf("\n\n\n -----------------------------");
	printf("\n In Traversal / display ");
	printf("\n -----------------------------");
        if( head==NULL )
        {
                printf("\n List is empty:");
                return;
        }
        else
        {
                ptr=head;
                printf("\n The List elements are:[ ");
                while(ptr!=NULL)
                {
                        printf("(%d)%d, ",pos,ptr->info );
                        ptr=ptr->next ;
			pos++;  //node position
                }
		printf("]\n");
        }
}	


