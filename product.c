#include<stdio.h>
int main()
{
  int n,m,pct;
  scanf("%d %d",&n,&m);
  pct=n*m;
  if(pct % 2 == 0) 
  {
    printf("Even");
  }
  else
  {
    printf("Odd");
  }
  return 0;
}
