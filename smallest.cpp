#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int i,j,t,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	
	int k;
	printf("enter the value of k:");
	scanf("%d",&k);
	
    printf("%dth smallest is %d and %dth largest is %d",k,a[k-1],k,a[n-k]);
    
    return 0;
}
