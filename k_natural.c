#include<stdio.h>
int main()
{
  int n,i,total;
  printf("Enter the number");
  scanf("%d",&n);
  if(n >= 1)
  {
    total=0;
    for(i=1;i<=n;i++)
    {
      total=total+i;
    }
    printf("%d",total);
  }
  return 0;
}
 }
