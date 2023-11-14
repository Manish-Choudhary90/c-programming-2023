#include<stdio.h>
int main()
{
	char ch,str[]="akshay";
	int i=0;
    printf("enter the character:");
    scanf("%c",&ch);
	
	while(str[i]!=ch)
		i++;
	printf("first occurrence of the character %c is %d",ch,i);
	
	return 0;
}
