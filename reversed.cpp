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
	
	int p=0,q=n-1,t;
	for(i=0;i<n/2;i++)
	{
		t=a[p];
		a[p]=a[q];
		a[q]=t;
		p++;
		q--;
	}
	
	printf("reversed array is:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	return 0;
}
