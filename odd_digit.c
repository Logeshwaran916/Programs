#include<stdio.h>
int main()
{
  int Num,remainder;
  scanf("%d",&Num);
  if(Num <= 100000)
  {
    while(Num)
    {
      remainder=Num%10;
      if(remainder % 2)
      {
        printf("%d\t",remainder);
      }
      Num=Num/10;
   }
  }
  return 0;
}
