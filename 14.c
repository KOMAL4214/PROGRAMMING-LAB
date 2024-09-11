#include<stdio.h>
int main()
{
           char ch;
          printf("program to check num is  capitalletter,smallletter ,digit,symbol");
          printf("\nenter the value");
          scanf("%c",&ch);
          if(ch>='A'&&ch<='Z')
          {
          printf("capital");
          }
          else if(ch>='a'&&ch<='z')
          {
          printf("small");
          }
          else if(ch>='0'&&ch<='9')
          {
          printf("digit");
          }
          else
          {
          printf("symbol");
          }
          
          
          
          
          
          
               
          
return 0;
}