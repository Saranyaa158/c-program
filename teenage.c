#include<stdio.h>
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age<=5)
	{
		printf("Nice child");
	}
	else if(age<=10)
	{
		printf("nice child");
	}
	else if(age<=15)
	{
		printf("teenage");
	}
	else if(age<=50)
	{
		printf("young dynamic");
	}
	return 0;
}
