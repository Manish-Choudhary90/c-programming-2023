#include<stdio.h>
int main()
{
	float phy,ch,bio,math,com,p;
	printf("enter the marks");
	scanf("%f%f%f%f%f",&phy,&ch,&bio,&math,&com);
	p=(phy+ch+bio+math+com)/5;
	printf("the percantage is %f%%",p);
	if(p>=90)
	{
		printf("grade a");
	}
	else if(p>=80)
	{
		printf("grade b");
	}
	else if(p>=70)
	{ 
	printf("grade c");
	}
	else if(p>=60)
	{
		printf("grade d");
	}
	else if(p>=40)
	{
		printf("grade e");
	}
	else
	{
		printf("grade f");
	}
	return 0;
}
