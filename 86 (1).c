#include<stdio.h>
#include<string.h>
int lentxt(int n);
int main()
{
  int n;
  lentxt(n);
  }
  int lentxt(int n)
  {
  char txt[16];
  printf("enter the text");
  gets(txt);
  puts(txt);
  printf("\n");
  n=strlen(txt);
  printf("\nthe length of the above text is:");
  printf("%d",n);
  }
