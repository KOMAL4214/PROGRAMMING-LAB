#include<stdio.h>
int main()
{
           int i,N,x=1;
          printf("program to check whether the number is prime or not");
          printf("\nenter the number N");
          scanf("%d",&N);
          for(i=2;i<=N;i++)
          {
          if(N%i==0)
          x++;
          }
          if(x==2)
          {
          printf("prime");
          }
          else
          {
          printf("not prime");
          }
return 0;
}