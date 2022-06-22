#include <stdio.h>
#include <stdlib.h>
#define n 5
int top=-1;
int stack[n];
void push(int val)
{
	if(isfull())
	{
		printf("\nOverflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d Pushed",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\n%d Popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}
int isfull()
{
	if(top==n-1)
		return 1;
	else 
		return 0;
}

int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void findtop()
{
	printf("\nTop Position: %d",top);
	printf("\nTop Value: %d",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
		printf("\n%d",stack[i]);
}
void main()
{
	int ch,entry;
	while(1)
	{	
	printf("\n\n1.Push\n2.Pop\n3.Display\n4.Empty or Full?\n5.Find Top\n6.Exit\n\nEnter Your Choice: ");
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
				if(isfull())
					printf("\nStack is Full");
				else if(isempty())
					printf("\nStack is Empty");
				else
					printf("\nStack is Neither Full nor Empty");
				break;
			}
			case 5:
			{
				findtop();
				break;
			}
			case 6:
			{
				printf("\nGoodbye!!");
				exit(0);
			}
			default:
			{
				printf("\nInvalid Choice");
			}
		}
	}
}
		
