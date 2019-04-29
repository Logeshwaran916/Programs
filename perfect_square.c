#include<stdio.h>
int main()
{
  int Num,K,product,index,square,flag=0;
  scanf("%d %d",&Num,&K);
  product=Num*K;
  for(index=1;index<product;index++)
  {
    square=index*index;
    if(product == square)
    {
      flag=1;
    }
   }
    if(flag == 1)
    {
      printf("yes");
    }
    else
    {
      printf("No");
    }
  return 0;
}
