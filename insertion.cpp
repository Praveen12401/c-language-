#include<stdio.h>
int main()
{

	printf("Enter array of size:");
	
	int n;
	
    scanf(" %d",&n);

	int i,pos,num,arr[n]={1,3,6,8,9,2,12,22};
	 
	

	
	for(i=0;i<n;i++)
	{
	
	printf("  %d",arr[i]);
}
printf("\n enter number to insert: ");
scanf(" %d",&num);
printf("\n enter the position of index number : ");
scanf(" %d",&pos);
for(i=n;i>pos;i--)
{
	arr[i]=arr[i-1];
}
arr[pos]=num;
printf("\n complete your insertion");
for(i=0;i<n;i++)
{
	printf("  %d",arr[i]);
}
}

