#include<stdio.h>
int main()
{
  int input1,input2,ans;
  char operator;
  scanf("%d %c %d",&input1,&operator,&input2);
  if(operator == '/')
  {
    ans=input1/input2;
  }
  else if(operator == '%')
  {
    ans=input1%input2;
  }
  printf("%d",ans);
  return 0;
}
