#include<stdio.h>
int main()
{
	int c=0,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int i,j,t,a[n-1];
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-2;j++)
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	
	while(a[c]==c+1)
	{
		c++;
	}
	printf("the missing number is %d",c+1);
	
    return 0;
}
