#include<stdio.h>
#include <math.h>
int main()
{
           int n,i,x=1;
           printf("program to read a num and check the num is prime or composite");
           printf("\nenter the number");
           scanf("%d",&n);
           for(i=2;i<=n;i++)
           {
           if(n%i==0)
           {
           x++;
           }
           }
           if(x==2)
           {
           printf("the number is prime");
           }
           if(x>2)
           {
           printf("the number is composite");
           }
           
return 0;
}