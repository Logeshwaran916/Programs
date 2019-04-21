#include<stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(isdigit(ch) != 0)
  {
    printf("yes");
  }
  else{
    printf("Negative");
  }
  return 0;
}
