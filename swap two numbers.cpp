#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("swapped values are %d %d",a,b);
	return 0;
}
