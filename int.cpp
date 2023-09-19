#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the two numbers");
	scanf("%f%f",&a,&b);
	c=a*b;
	printf("output in floating point represtation is %f",c);
	int d;
	d=c;
	printf("output in integer is %d",d);
	return 0;
}
