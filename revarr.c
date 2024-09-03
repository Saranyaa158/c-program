#include<stdio.h>
int main()
{
	int f=0,l,temp,size;
	int arr[]={8,6,16,7,17,9};
	size=sizeof(arr)/sizeof (arr[0]);
	l=size-1;
	while(f<l)
	{
		temp=arr[f];
		arr[f]=arr[l];
		arr[l]=temp;
		f++;
		l--;
	}
	printf("reverse the array ");
	for(f=0;f<size;f++)
	{
		printf("%d\n",arr[f]);
	}
	return 0;
}

