#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values of a,b");
	scanf("%d%d",&a,&b);
	a=a-b;
	b=b+a;
	a=b-a;
	printf("swapped values are %d %d",a,b);
	return 0;
}
