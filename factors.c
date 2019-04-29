#include<stdio.h>
int main()
{
  int Num,index;
  scanf("%d",&Num);
  if(Num<=1000)
  {
    for(index=1;index<=N;index++)
    {
      if(Num % index == 0)
      {
        printf("%d\t",index);
      }
    }
  }
  return 0;
}
