#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i;
	p=(int*)malloc(5*sizeof(int));
	printf("enter a number");
	for(i=0;i<=6;i++){
	
	scanf("%d",(p+i));
}
printf("your data\n");
for(i=0;i<=6;i++)
{ 
	printf("  %d  ",(*p+i));
	printf("\n");
		printf("  %d  ",(p+i));
}
//printf("\n%d",sizeof(p));
}
