#include<stdio.h>
int main()
{
  int hr1,hr2,minute1,minute2,hr3,minute3;
  scanf("%d %d",&hr1,&minute1);
  scanf("%d %d",&hr2,&minute2);
  hr3=hr1-hr2;
  minute3=minute1-minute2;
  printf("%d %d",hr3,minute3);
}
