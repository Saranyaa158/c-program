#include<stdio.h>
int main()
{
	int x=10,y=20,max;
	max=(x>y ? x:y);
	while(1)
	{
		if(max%x==0 && max%y==0)
		{
		printf("Enter the lcm of %d and %d is %d ",x,y,max);
		scanf("%d %d %d",&x,&y,&max);
		break;
	}
		max++;
	}
		return 0;
}

              


