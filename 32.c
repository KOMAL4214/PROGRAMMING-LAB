#include<stdio.h>
#include <math.h>
int main()
{
           int i,max=0,secmax=0,n,k,o;
          printf("program to print max and secmax");
          printf("\nenter the numbers");
          scanf("%d",&n);
          for(i=1;i<=n;i++)
          {
          scanf("%d",&o);
          k=o;
          if(k>=max)
          {
          secmax=max;
          max=k;
          }
          else if(k<max)
          {
          if(k>=secmax)
          {
          secmax=k;
          }
          }
          }
          printf("max=%d",max);
          printf("secmax=%d",secmax);
return 0;
}