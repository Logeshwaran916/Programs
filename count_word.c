#include<stdio.h>
#include<string.h>
int main()
{
  char str[50],word=1,i;
  gets(str);
  for(i=0;str[i] !='\0' ;i++)
  {
  	if(str[i] == ' ')
  	{
  		word++;
  	}
  	
  }
   printf("%d",word);
   return 0;
 }
