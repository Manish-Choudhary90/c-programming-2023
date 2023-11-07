#include<stdio.h>
int main()
{
	int j=0,k=0;
   	char str1[]="computer";
   	 while(str1[j]!='\0')
    {
    	k++;
    	j++;
	}
	
   	char str2[k+1];
   	int i;
   	for(i=0;i<k+1;i++)
   	  str2[i]=str1[i];
   	  
   	printf("%s",str2);

	return 0;
}
