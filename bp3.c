#include<stdio.h>
int main()
{
	int a=5,b=20;
	int *p,*q;
	p=&a;
	q=&b;
	*p=*q;
	printf("%d,%d,%d,%d\n",a,*p,*q,*(&b));
	return 0;
}
