#include<stdio.h>
#include <math.h>
int main()
{
           int i,n,odd;
          printf("program to print even series");
          printf("\nenter the number");
          scanf("%d",&n);
          for(i=1;i<=n;i++)
          {
          if(i%2==0)
          {
          printf("%d,",i);
          }
          }
return 0;
}