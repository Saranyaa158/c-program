#include<stdio.h>
int main()
{
	int a=5,b=10;
	int* p,*q;
	p=&a;
	q=&b;
	printf("the values of  a is %d \n",*p);
	printf("the value of address of b is %p \n",&b);
	printf("the value of b is %d  \n",b);
	return 0;
}
