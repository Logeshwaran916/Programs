#include<stdio.h>
int main()
{
  char input[20],len,n;
  scanf("%s",&input);
  len=strlen(input);
  n=len/2;
  len=len-1;
  if(len % 2)
  {
    input[n]='*';
    input[n+1]='*';
  }
  else
  {
    input[n]='*';
  }
  printf("%s",input);
  return 0;
}
