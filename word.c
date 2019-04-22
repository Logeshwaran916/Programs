#include<stdio.h>
int main()
{
  int N;
  scanf("%d",&N);
  if((N >= 1) && (N <= 10))
  {
    if(N == 1)
    {
      printf("One");
    }
     else if(N == 2)
    {
      printf("Two");
    }
     else if(N == 3)
    {
      printf("Three");
    }
     else if(N == 4)
    {
      printf("four");
    }
     else if(N == 5)
    {
      printf("Five");
    }
     else if(N == 6)
    {
      printf("six");
    }
     else if(N == 7)
    {
      printf("Seven");
    }
     else if(N == 8)
    {
      printf("Eight");
    }
     else if(N == 9)
    {
      printf("Nine");
    }
    else
    {
      printf("Ten");
    }
  }
  return 0;
}
