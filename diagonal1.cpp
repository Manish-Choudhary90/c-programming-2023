#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the order of matrix:");
	scanf("%d",&n);
	
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	
	int sum=0;
	if(i==j)
	{
		for(i=0;i<n;i++)
		sum=sum+a[i][i];
	}
	
	printf("sum of left diagonal is %d",sum);
	
	return 0;
}
