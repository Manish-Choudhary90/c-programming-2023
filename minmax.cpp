#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max,min,sum=0;
	max=a[0];
	min=a[0];
	
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]>max)
		max=a[i+1];
	}
	printf("maximum number is %d\n",max);
	
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]<min)
		min=a[i+1];
	}
	printf("minimum number is %d\n",min);
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	float avg=(float)sum/n;
	printf("average is %f",avg);
	
	return 0;
}
