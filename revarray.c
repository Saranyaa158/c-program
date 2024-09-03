#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i=5,j=0,temp;
	while(j<i)
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		printf("\n reverse the array");
	}
	while(i>=5)
	{
		printf("%d\n",a[i]);
		i--;
		j++;
	}
	return 0;
}
