#include<stdio.h>
int main()
{
	int sum=0,n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of first %d natural numbers is %d",n,sum);
	return 0;
}
