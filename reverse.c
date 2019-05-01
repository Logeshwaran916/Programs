#include<stdio.h>
int main()
{
  int digit,remainder,total=0;
  scanf("%d",&digit);
  while(digit)
  {
    remainder=digit%10;
    total=total*10+remainder;
    digit=digit/10;
  }
  printf("%d",total);
  return 0;
}
