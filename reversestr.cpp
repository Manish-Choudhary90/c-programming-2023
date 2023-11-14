#include<stdio.h>
int main()
{
	char str[]="abcde";
	int i=0,c=0,t;
	while(str[i]!=0)
	{
		c++;
		i++;
	}
	
	int p=0;
	int q=c-1;
	for(i=0;i<c/2;i++)
	{
		t=str[p];
		str[p]=str[q];
		str[q]=t;
		p++;
		q--;
    }
    for(i=0;i<c;i++)
	printf("%c",str[i]);
	
	return 0;
}
