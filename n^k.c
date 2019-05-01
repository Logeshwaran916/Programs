#include<stdio.h>
int main()
{ 
  int N,K,power=1,i;
  scanf("%d %d",&N,&K);
  for(i=0;i<3;i++)
  {
    power=power*N;
  }
  printf("%d",power);
  return 0;
}
