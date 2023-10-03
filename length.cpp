#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter the value of n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n>0;
		n=n/10;
		c++;
	}
	printf("length of the number is %d",c);
	return 0;
}
