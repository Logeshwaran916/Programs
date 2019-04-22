#include<stdio.h>
int main()
{
  int N,rem;
  int sum=0;
  scanf("%d",&N);
  while(N)
  {
    rem=N%10;
    sum=sum+rem;
    N=N/10;
  }
  printf("%d",sum);
  return 0;
 }
