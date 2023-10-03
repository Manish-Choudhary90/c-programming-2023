#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("multipication table of %d is\n",n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0;
}
