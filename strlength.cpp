#include<stdio.h>
int main()
{
	int j=0,k=0;
	char str[]="comput";

    while(str[j]!='\0')
    {
    	k++;
    	j++;
	}
	printf("length of the string is %d",k+1);
	    
	    return 0;
}
