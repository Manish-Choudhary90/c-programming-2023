#include<stdio.h>
int main()
{
	float a,b,c,d,e,p;
	printf("the marks student get are");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)/5;
	printf("percentage of student %f",p);
	return 0;
}
