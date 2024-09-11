#include<stdio.h>
int main()
{
          int a,b,c;
          printf("program to read three nos and print max");
          printf("\nenter the numbers");
          scanf("%d %d %d",&a,&b,&c);
          if(a>b)
          {
                 if(a>c)
                 {
                 printf("a is max");
                 }
                 else
                 {
                 printf("c is max");
                 }
          }
          if(b>a)
          {
                 if(b>c)
                 {
                 printf("b is max");
                 }
                 else
                 {
                 printf("c is max");
                 }
            }     
          
          
          
          
          
          
          
               
          
return 0;
}