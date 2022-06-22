#include<stdio.h>
#include<stdlib.h>
#define n 5

void main()
{
	struct node
	{	
		int data;
		struct node *next;
	};
	
	struct node *head=NULL,*tail=NULL,*pos=NULL;
	int rear=0;
	
	while(1)
	{
		int option,entry;
		printf("\n\n\n MENU \n 1: ENQUEUE \n 2: DEQUEUE \n 3: DISPLAY \n 4: EXIT \n\n ENTER CHOICE : ");
		scanf("%d",&option);
		
		switch(option)
		{
			case 1 :
			{
				if(rear>=n)
				{
					printf("\n OVERFLOW");
				}
				else
				{
					printf(" ENTER DATA :");
					scanf("%d",&entry);
					
					if(head==NULL)
					{
						head=(struct node *) malloc(sizeof(struct node));
						head->data=entry;
						head->next=NULL;
						pos=head;
						tail=head;
						rear=1;
					}
					
					else
					{	
						tail->next=(struct node *) malloc(sizeof(struct node));
						tail=tail->next;
						tail->data=entry;
						tail->next=NULL;
						rear++;
					}
				}
				break;
			}
			
			case 2:
			{
				if(head==NULL)
				{
					printf("\n UNDERFLOW ");
				}
				else
				{
					struct node *del=head;
					head=head->next;
					del->next=NULL;
					free(del);
					rear--;
				}
				break;
			}
			
			case 3:
			{
				pos=head;
				if(head==NULL)
				{
					printf("\n QUEUE EMPTY ");
				}
				else
				{	printf(" THE ELEMENTS ARE :\n");
					while(pos!=NULL)
					{
						printf("%d\n",pos->data);
						pos=pos->next;
					}
				}
				break;
			}
			
			case 4:
			{
				printf("\n EXITING \n");
				exit(0);
			}
			
			default:
			{
				printf(" WRONG OPTION!!!\n");
			}
		}
	}
}
