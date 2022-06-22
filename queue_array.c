#include<stdio.h>
#include<stdlib.h>
#define n 5

int rear=-1;
int front=-1;
int queue[n];

int isfull()
{
	if(rear==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(rear==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enqueue(int val)
{	
	if(isfull())
	{
		printf("\n Overflow");
	}
	
	else
	{
		if(front==-1)
		{
			front=0;
			
		}
		rear++;
		queue[rear]=val;
	}
}

void dequeue()
{
	int i;
	if(isempty())
	{
		printf("\n Underflow");
	}
	
	else
	{
		for(i=0;i<rear;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}

void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",queue[i]);
	}
}

void main()
{
	while(1)
	{
		int option, entry;
		printf("\n\n QUEUE USING ARRAY\t 1: Enqueue \t 2: Dequeue \t 3: Display \t 4: Exit \n\n Enter your choice :");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
			{
				printf(" Enter element :");
				scanf("%d",&entry);
				enqueue(entry);
				break;
			}
			
			case 2:
			{
				dequeue();
				break;
			}
			
			case 3:
			{
				display();
				break;
			}
			
			case 4:
			{
				printf("\n Goodbye!! \n");
				exit(0);
			}
			
			default:
			{
				printf("\n Wrong option!! \n");
			}
		}
	}
}
