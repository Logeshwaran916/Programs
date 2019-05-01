#include<stdio.h>
#include<string.h>
int main()
{
  char input[20];
  int n,length,diff,i;
  scanf("%s %d",&input,&n);
  length=strlen(input);
  diff=length-n;
  for(i=diff;i<length;i++)
  {
    printf("%s",input[i]);
  }
  return 0;
  
}
