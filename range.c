#include<stdio.h>
int main()
{
  int input;
  scanf("%d",&input);
  if((input > 0) && (input < 11))
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
