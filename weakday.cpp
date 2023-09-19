#include<stdio.h>
int main()
{
	int a;
	printf("enter day number");
	scanf("%d",&a);
	if(a==1)
	{
		printf("day is monday");
	}
	else if(a==2)
	{
		printf("day is tuesday");
	}
	else if(a==3)
	{
		printf("day is wednesday");
	}
	else if(a==4)
	{
		printf("day is thursday");
	}
	else if(a==5)
	{printf("day is friday");
	}
	else if(a==6)
	{
		printf("day is saturday");
	}
	else if(a==7)
	{
		printf("day is sunday");
	}
	else
	{
		printf("invalid input");
	}
	return 0;
}
