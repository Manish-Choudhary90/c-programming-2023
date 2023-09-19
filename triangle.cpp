#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the sides of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&a==c)
	{
		printf("triangle is equilateral");
    }
    else if(a!=b&&a!=c&&b!=c)
    {
    	printf("triangle is scalene");
	}
	else
	{
		printf("triangle is isosceles");
	}
	return 0;
}
