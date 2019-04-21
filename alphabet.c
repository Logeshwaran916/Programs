#include<stdio.h>
int main()
{
  scanf("%c",&input);
  if((input >= 'A') && (input <= 'z'))
  {
    printf("Alphabet");
  }
  else
  {
    printf("No");
  }
  return 0;
}
