#<include<stdio.h>
int main()
{
  int num,remainder,count=0;
  scanf("%d",&num);
  while(num)
  {
    remainder=num%10;
    if((num != 0) && (num != 1))
    {
      count++;
    }
    num=num/10;
  }
  if(count > 0)
  {
    printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
