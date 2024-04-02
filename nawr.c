#include<stdio.h>
int sum();
int main()
{
	int result;
	printf("/n going to calulate sum of two numbers");
	result=sum();
	printf("%d",result);
}
int sum()
{
	int a,b;
	printf("enter the values of a,b");
	scanf("%d %d",&a,&b);
	return a+b;
}

