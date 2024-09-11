#include<stdio.h>
int main()
{
          int m,e,h,p,t,totmarks,perc;
          printf("program to calculate marks and percentage");
          printf("\nhere m=maths,e=English,h=Hindi,p=physics,t=Telugu"); 
          scanf("%d %d %d %d %d",&m,&e,&h,&p,&t);
          totmarks=m+e+h+p+t;
          perc=(totmarks*100)/500;
          printf("totmarks=%d",totmarks);
          printf("percentage=%d",perc);
          
          
          
               
          
return 0;
}
    