#include <stdio.h>
int main()
{ 
     char name[100],gen[109],aut[109];
      printf("enter the name,genre,autor of the book");
      gets(name);
      gets(gen);
      gets(aut);
      printf("the name of the book is\n");
      puts(name);
      printf("the genre of the book is\n");
      puts(gen);
      printf("the autor of the book is \n");
      puts(aut);
    return 0;
}