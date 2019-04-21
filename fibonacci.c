#include<stdio.h>
int main()
{
  int num1=1,num2=1,n,f;
  scanf("%d",&n);
  printf("%d\t %d\t",num1,num2);
  n=n-2;
  for(i=0;i<n;i++)
  {
    f=num1+num2;
    num1=num2;
    num2=f;
    printf("%d",f);
  }
  return 0;
}
