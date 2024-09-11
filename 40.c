#include<stdio.h>
#include <math.h>
int main()
{
           int n=0,sum=0;
           printf("program to read till a -ve num appear and sum of +ve");
           printf("\nenter the numbers");
           do
           {
           sum=sum+n;
           scanf("%d",&n);
           }while(n>=0);
           printf("sum=%d",sum);
return 0;
}