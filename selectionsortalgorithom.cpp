//selection sort algorithom
#include<stdio.h>
int main()
{
	 
int arr[10];
	int i,j,p,d,n,k,swap;
	printf("How many number enter you please enter : ");
	scanf("%d",&n);
		printf(" ");
	for(k=0;k<n;k++)
	{
 
		scanf("%d",&arr[k]);
		
	}
	 
	printf("sort data here: ");
	for(i=0;i<n;i++)
	{
		p=i;
		for(j=i+1;j<n;j++)
		{
			if (arr[p]>arr[j])
			{
				p=j;
			}
		}
		if (p!=i)
		{
		 swap=arr[i];
		 arr[i]=arr[p];
		 arr[p]=swap;	
		}
	}
	
	
for(i=0;i<n;i++)
{
printf(" %d",arr[i]);
}
	return 0;
}
// #include <stdio.h>
//int main()
//{
//int a[100], n, i, j, position, swap;
//printf("Enter number of elementsn");
//scanf("%d", &n);
//printf("Enter %d Numbersn \n", n);
//for (i = 0; i < n; i++)
//scanf("%d", &a[i]);
//for(i = 0; i < n - 1; i++)
//{
//position=i;
//for(j = i + 1; j < n; j++)
//{
//if(a[position] > a[j])
//position=j;
//}
//if(position != i)
//{
//swap=a[i];
//a[i]=a[position];
//a[position]=swap;
//}
//}
//printf("Sorted Array:n");
//for(i = 0; i < n; i++)
//printf("%d\n", a[i]);
//return 0;
//}

