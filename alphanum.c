#include<string.h>
#include<ctype.h>
int main()
{
  char s[20];
  gets(s);
  int i,count_alp=0,count_num=0;
  for(i=0;s[i] != '\0';i++)
  {
	if((s[i] >= 'A') && (s[i] <= 'z') )
	{
		count_alp=1;
	}
	else if((s[i] >= '0') && (s[i] <= '9') )
	{
		count_num=1;
	}
  }
  if((count_alp == 1) && (count_num == 1))
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
