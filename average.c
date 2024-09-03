#include<stdio.h>
#include<stdlib.h>
int main()
{
	float n1,n2,n3 average;
	printf("enter the value of n1,n2,n3");
	scanf("%f %f %f",&n1,&n2,&n3);
	average=(n1+n2+n3) / 3;
	printf("the average of 3 numbers is %.2f",average);
	return 0;
}
