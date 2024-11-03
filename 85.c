#include<stdio.h>
char vowel(char ch);
int main()
{
  char ch;
  printf("enter the character");
  scanf("%c",&ch);
  vowel(ch);
  }
  char vowel(char ch)
  {
  switch(ch)
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
  case 'A' :printf("\nvowel");
                 break;
   default : printf("\nnot vowel");              
  }
return 0;
}