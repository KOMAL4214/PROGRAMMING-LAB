#include<stdio.h>
int main()
{
  int wscount=0,nscount=0;
  char *str,txt[1000];
  printf("enter the string");
  gets(txt);
  str=&txt;
  while(*str!='\0')
  {
  wscount++;
  if(*str!=' ')
  {
  nscount++;
  }
  str++;
  }
  printf("\nlength of string with spaces =%d",wscount);
  printf("\nlength of string without spaces =%d",nscount);
return 0;
}