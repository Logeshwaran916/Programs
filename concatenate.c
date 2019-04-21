#include<stdio.h>
int main()
{
  char s[20],s[20];
  int i,j;
  scanf("%s %s",s1,s2);
  for(i=0;s1[i] != '\0';i++);
  for(j=0;s2[j] != '\0';i++,j++)
  {
  	s1[i]=s2[j];
  }
  s1[i]='\0';
  printf("%s",s1);
  return 0;
}
