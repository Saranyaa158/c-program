#include<stdio.h>
int main(int argc,char *argv)
{
	int arr[5]={11,22,33,44,55};
	int* parr=NULL;
	parr = arr;
	while(parr<=&arr[4])
	{
		printf("%d\n",*parr);
		parr++;
	}
	return 0;
}


