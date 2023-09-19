#include<stdio.h>
#include<math.h>
int main()
{
	float k,m,cm,mm;
	printf("total kilometers");
	scanf("%f",&k);
	m=k*1000;
	printf("in meter %f",m);
	cm=k*100000;
	printf("in centimeter %f",cm);
	mm=k*1000000;
	printf("in millimeter %f",mm);
	return 0;
}
