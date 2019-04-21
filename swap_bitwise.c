#include<stdio.h>
int main()
{
  int n1,n2,temp;
  scanf("%d %d",&n1,&n2);
  n1= n1 ^ n2;
  n2 = n1 ^ n2;
  n1=n1 ^ n2;
   printf("%d %d",n1,n2);
   return 0;
}
