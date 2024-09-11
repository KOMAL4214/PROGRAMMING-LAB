#include<stdio.h>
#include <math.h>
int main()
{
           int i,n,k;
          printf("program to print square series");
          printf("\nenter the number");
          scanf("%d",&n);
          for(i=1;i<=n;i++)
          {
          k=i*i;
          printf("%d,",k);
          }
return 0;
}