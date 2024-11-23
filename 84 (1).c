#include <stdio.h>
struct book 
{
char bookname[199];
char bookgenre[299];
char bookaut[100];
};
int main()
{ 
     struct book *der[1];
     int i;
     der[1]=(char*)malloc(3*sizeof(char));
      printf("enter the name,genre,autor of the book");
      gets(der[1]->bookname);
      gets(der[1]->bookgenre);
      gets(der[1]->bookaut);
      printf("the name of the book is\n");
      puts(der[1]->bookname);
      printf("the genre of the book is\n");
      puts(der[1]->bookgenre);
      printf("the autor of the book is \n");
      puts(der[1]->bookaut);
    return 0;
}