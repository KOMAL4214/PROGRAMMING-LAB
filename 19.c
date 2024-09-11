#include<stdio.h>
int main()
{
          char ch;
          printf("program to check the letter is small case or not");
          printf("\nenter the letter");
          scanf("%d",&ch);
          if(ch>='a'&&ch<='z')
          {
          printf("small case");
          }
          else
          {
          printf("not small case");
          }
return 0;
}