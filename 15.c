#include<stdio.h>
int main()
{
          int marks,M,P,S,H,T;
          printf("program to read five subjects and print division");
          printf("\nenter the marks of each subject");
          scanf("%d %d %d %d %d",&M,&P,&S,&H,&T);
          marks=M+P+S+H+T;
          if(marks>=200&&marks<=500)
          {
          printf("division a");
          }
          if(marks<200)
          {
          printf("division b");
          }
          
          
          
          
          
          
          
               
          
return 0;
}