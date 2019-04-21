#include<stdio.h>
int main()
{
  char s1[20],s2[20];
  scanf("%s %s",&s1,&s2);
  if(s1 > s2)
  {
    printf("%s",s1);
  }
  else
  {
    printf("%s",s2);
  }
  return 0;
}
