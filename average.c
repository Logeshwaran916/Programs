#include<stdio.h>
int main()
{
  int n,i,total=0,avg;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    total=total+a[i];
  }
  avg=total/n;
  printf("%d",avg);
  return 0;
}
