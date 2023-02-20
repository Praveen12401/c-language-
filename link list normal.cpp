#include<stdio.h>
#include<stdlib.h>
struct P
{
	int data;
	int *next;
	
}f1,f2,f3;
int main()
{
	f1={10};
	f2={20};
	f3={30};
	printf("%d\n",f1.data);
		printf("%d\n",f3.data);
			printf("%d\n",f2.data);
}
