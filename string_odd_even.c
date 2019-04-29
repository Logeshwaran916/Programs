#include<stdio.h>
int main()
{
  char str1[20],str2[20]={0},str3[20]={0};
  int index,j=0,k=0;
  scanf("%s",str1);
  for(index=0;str1[index] != '\0';index++)
  {
    if(index % 2)
    {
      str2[j] = str1[index];
      j++;
    }
    else
    {
      str3[k] = str1[index];
      k++;
    }
  }
  printf("%s %s",str2,str3);
  return 0;
}
