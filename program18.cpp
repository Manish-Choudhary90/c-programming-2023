#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=0;s<n-i;s++)
		printf(" ");
		
		for(j=1;j<=i;j++)
		printf("%d ",i);
		
		printf("\n");
	}
	return 0;
}
