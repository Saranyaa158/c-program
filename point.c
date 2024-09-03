#include<stdio.h>
int main()
{
	int a=4;
	int*ptr;
	ptr=&a;
	printf("the value of a is %d\n",a);
	printf("the address of a is %p\n ",ptr);
	printf("the value of a is %d \n",*ptr);
	
	
	return 0;
}

