#include<stdio.h>
int main()
{
  int i,n,temp,median,j;
  scanf("%d",&n);
  int a[n];
  if(n <= 100000)
  {
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      if(arr[i] > a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
     }
     if(n%2==0)
     {
      median=(n/2)+(n+1)/2-1;
     }
     else
     {
      median=(n+1)/2-1;
     }
     printf("%d",a[median]);
     
   }
  return 0;
}
