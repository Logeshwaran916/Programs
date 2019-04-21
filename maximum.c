#include<stdio.h>
int main()
{
  int n,largest,i;
  scanf("%d",&n);
  int a[n];
  if(n <= 100000)
  {
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i] > largest)
      {
        largest=a[i];
      }
    }
    printf("%d",largest);
    
  }
  return 0;
}
