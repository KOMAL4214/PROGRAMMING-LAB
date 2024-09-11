#include<stdio.h>
int main()
{
           int i,factorial=1,n;
          printf("program to calculate factorial");
           printf("\nenter the number ");
          scanf("%d",&n);
          for(i=n;i>0;i--)
          {
          factorial=factorial*i;
          }
          printf("factorial of %d=%d",n,factorial);
          
return 0;
}