#include<stdio.h>
int main()
{
          int hrs,mins,sec,totsec;
          printf("program to read time in hrs,mins,sec and convert it into total sec");
          printf("\nenter the time in hrs ,mins,sec");
          scanf("%d %d %d",&hrs,&mins,&sec);
          totsec=(hrs*3600)+(mins*60)+sec;
          printf("%d",totsec);
          
          
          
          
               
          
return 0;
}