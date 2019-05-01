#include<stdio.h>
int main()
{
  int a,b,c,sum_ap;
  scanf("%d %d %d",&a,&b,&c);
  sum_ap=c/2*(2*a+(b-1)*c);
  printf("%d",sum_ap);
  return 0;
}
