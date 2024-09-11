#include<stdio.h>
int main()
{
          int x,y;
          printf("program to two variables without using third variable");
          printf("\nenter the values of a,b");
          scanf("%d %d",&x,&y);
          x=x+y;
          y=x-y;
          x=x-y;
          printf("%d %d",x,y);
          
          
          
          
               
          
return 0;
}