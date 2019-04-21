#include<stdio.h>
int main()
{
  int n,a,d,sum;
  scanf("%d %d %d",&n,&a,&d);
  if((a <= 100000) && (n <= 100000) && (d <= 100000))
  {
	sum=n/2*(2*a+(n-1)*d);
  }
  printf("%d",sum);
  return 0;
}
