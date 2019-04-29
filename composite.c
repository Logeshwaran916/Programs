#include<stdio.h>
int main()
{
  int num,i,count = 0;
  scanf("%d",&num);
  for(i=2;i<num;i++)
  {
    if(num % i == 0)
    {
      count = 1;
    }
  }
  if(count == 1)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
