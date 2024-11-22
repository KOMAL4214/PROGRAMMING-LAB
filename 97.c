#include<stdio.h>
int main()
{
  char *ch,txt[1000];
  int i=0,vcount=0;
  printf("enter the string");
  gets(txt);
  ch=&txt[0];
  while(*ch!='\0')
  {
  switch(*ch)
  {
  case 'a' :
  case 'e' :
  case 'i' :
  case 'o' :
  case 'u' :
  case 'U' :
  case 'O' :
  case 'I' :
  case 'E' :
  case 'A' :vcount++;
                 break;
   default : break;              
  }
  i++;
  ch++;
  }
  printf(" number of vowels =%d",vcount);
  
  
return 0;
}