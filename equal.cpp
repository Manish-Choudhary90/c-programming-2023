#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three nunbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&a==c)
	{
		printf("three numbers are equal");
	}
	else
	{
		printf("three numbers are not equal ");
	}
	return 0;
}
