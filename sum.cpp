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
	
    int s;
    printf("enter the value of sum:");
    scanf("%d",&s);
    
    int p=0,q=n-1;
    for(i=0;i<n;i++)
    {
    	if(a[p]+a[q]==s)
    	  ;
    	else if(a[p]+a[q]<s)
    	  p++;
    	else
    	  q--;
    }
	printf("pair is %d,%d",a[p],a[q]);
	
	return 0;
}
