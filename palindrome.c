#include<stdio.h>
int main()
{
  char input[20],str[20];
  int index,j,len,count=0;
  scanf("%s",&input);
  len=strlen(input);
  j=len-1;
  for(index=0;index<len;index++)
  {
   str[index]=input[j];
   j--;
  }
  for(index=0;index<len;index++)
  {
    if(input[index] != str[index])
    {
      count = 1;
    }
  }
  if(count == 0)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
