#include<stdio.h>
void insert();
void deletion();
void display();
	int max=7;
	int queue[7],front=-1,reve=-1;
int main()
{

    while (1)
    {  int ch;
    	printf("\n 1. enter element for  ensert element ");
    	printf("\n 2.delet element for queue\n ");
    	printf("\n 3. display queue\n");
    	printf("\n enter your choice :  ");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:insert();
    		         break;
    	    case 2:deletion();
    		         break;
    		case 3: display();
    		         break;
    		default:printf("\n invailid choice");
    		
		}
    	
    	
	}
}
void insert()
{ int item;
	if(reve==7-1)
	
		printf("\n queue is full");
	
	else
	{ 
	if(front==-1)
	
	
		front=0;
		
		printf("\n enter elemrnt for insert in queue : ");
		scanf("%d",&item);
		reve+=1;
		queue[reve]=item;
	
	}
}
void deletion()
{
  if (front==-1)	
  printf("\n queue is empty");
  else
  {
  	front=front+1;
  	
  }
  
}
void display()
{
	int i;
	if(reve==-1)
	printf("\n queue is empty");
	else
	{
		printf("\n store element in queue");
		for(i=front;i<=reve;i++)
		{
			printf(" %d ",queue[i]);
		}
	}
}













