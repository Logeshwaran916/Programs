#include<stdio.h>
int main()
{
  char str[20],index,len,count =0;
  scanf("%s",&str);
  len=strlen(str);
  for(index=0;index<len;index++)
  {
    if((str[index] == 'a') || (str[index] == 'e') || (str[index] == 'i') || (str[index] == 'o') || (str[index] == 'u'))
    {
      count = 1;
    }
  }
  if(count == 1)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
