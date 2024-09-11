#include<stdio.h>
#include <math.h>
int main()
{
           int i,N,sum=0;
          printf("program to get sum of digits ");
          printf("\nenter the number");
          scanf("%d",&N);
          while(N>0)
          {
          i=N%10;
          sum=sum+i;
          N=N/10;
          }
          printf("sum=%d",sum);
          
return 0;
}