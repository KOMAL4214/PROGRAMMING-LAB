#include<stdio.h>
int main()
{
           int i,power=1,n,j;
          printf("program to calculate factorial");
           printf("\nenter the number n=number,j=to the power ");
          scanf("%d %d",&n,&j);
          for(i=1;i<=j;i++)
          {
          power=power*n;
          }
          printf("power of %d,%d=%d",n,j,power);
          
return 0;
}