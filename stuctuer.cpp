#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct student
	{
		int n;
		char *name;
		float marks;
		int a;
		  
	}s1;
	
	 s1={1,"praveen",85.423,65};
	printf("number : %d \n",s1.n);
	printf("name : %s \n",s1.name);
	printf("marks : %f\n" ,s1.marks);
	printf("number : %c \n",s1.a);
//	struct student *ptr;
		struct student s2;
		struct student *ptr=&s2;
		//={1,"praveen",85.423,65};
	printf("access using pointer\n");
	printf("number : %d \n",ptr->n=2);
	printf("name : %s \n",ptr->name="praveen yadav");
	printf("marks : %f\n" ,ptr->marks=88.76);
	printf("number : %d",ptr->a=42);
	 
}

