#include<stdio.h>
int main()
{
  int hour,min,input;
  scanf("%d",&input);
  hour=input/60;
  min=input-(hour * 60);
  printf("%d %d",hour,min);
}
