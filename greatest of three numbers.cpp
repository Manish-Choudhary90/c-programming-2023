#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf(" enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	  {
		printf("a is greatest of three numbers")
	  }
	else(b>c)
	  {
	  	printf("b is greatest of three numbers")
	  }
	else
	  {
	  	printf("c is greatest of three numbers")
	  }
	return 0;
    
}
