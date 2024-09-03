#include<stdio.h>
int main(int argc,char *argv[])
{
	int arr[5];
	int*ptr=NULL;
	ptr=arr;
	int i=0;
	printf("enter the values of array is");
	while(i<5)
	{
		scanf("%d",&arr[i]);
		++i;
	}

	while(ptr<=&arr[4])
	{
		if(*ptr%2==0)
		{
			printf("the number is %d is even\n",*ptr);
		}
		else{
			printf("the number is %d is odd\n",*ptr);
			
		}
		ptr++;
	}
	return 0;
}

		

