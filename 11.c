#include<stdio.h>
int main()
{
          int totalsec,hrs,min,sec;
          printf("program to read total time and convert it into time");
          printf("\nenter the total seconds");
          scanf("%d",&totalsec);
          hrs=totalsec/3600;
          min=(totalsec%3600)/60;
          sec=((totalsec%3600)%60);
          printf("%d:%d:%d",hrs,min,sec);
          
          
          
          
               
          
return 0;
}