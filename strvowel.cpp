#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter the string elements:");
	gets(str);
	int i,n;
	n=strlen(str);
	
	for(i=0;i<n;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		   printf("%c",str[i]);
	}
	
	return 0;
}
