#include<stdio.h>
int main()
{
	int i=1,n,f=1;
	printf("enter the value of n");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("the factorial of %d is %d",n,f);
	return 0;
}
