#include<stdio.h>
int main()
{
  int n,i=0,remainder;
  scanf("%d",&n);
  while(n)
  {
    remainder=n%10;
    n=n/10;
    i++;
  }
  printf("%d",i);
  return 0;
 }
