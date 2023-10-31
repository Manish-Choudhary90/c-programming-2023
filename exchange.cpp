#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);  //n shouid be even//
	
	int i,t,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i=i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	
	printf("changed array is:\n");
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	  
	  return 0;
}
