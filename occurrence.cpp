#include<stdio.h>
int main()
{
    int n,c=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int i,k,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the value of k:");
	scanf("%d",&k);  //number which occurrence to find=k//
	
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		c++;
	}
	
	printf("occurrence of %d is %d",k,c);
	
	return 0;
}
