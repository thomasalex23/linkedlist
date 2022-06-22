#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL, *pos=NULL, *tail=NULL;
int top=-1;
int isempty()
{
	if(head==NULL)
		return 1;
	else
		return 0;
}
void push(int val)
{
	if(head==NULL)
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->data=val;
		pos=head;
		top++;
		printf("\n%d Pushed",head->data);
	}
	else
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->next=pos;
		head->data=val;
		pos=head;
		top++;
		printf("\n%d Pushed",head->data);
	}
}
void pop()
{
	int num;
	if(head==NULL)
		printf("\nUnderflow");
	else
	{
		num=pos->data;
		head=head->next;
		pos->next=NULL;
		free(pos);
		pos=head;
		top--;
		printf("\n%d Popped",num);
	}
}
void display()
{
	pos=head;
	printf("\nElements are: ");
	while(pos!=NULL)
	{
		printf("\t%d",pos->data);
		pos=pos->next;
	}
	pos=head;
}
void findtop()
{
	printf("\nTop Position: %d",top);
	printf("\nTop Value: %d",head->data);
}
void main()
{
	int ch,entry;
	while(1)
	{
		printf("\n\n1. Push\n2. Pop\n3. Display\n4. Find Top\n5. Exit\n\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter Value to Insert: ");
				scanf("%d",&entry);
				push(entry);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				findtop();
				break;
			}
			case 5:
			{
				printf("\nGoodbye\n");
				exit(0);
			}
			default:
			{
				printf("\nInvalid Choice");
			}
		}
	}
}
