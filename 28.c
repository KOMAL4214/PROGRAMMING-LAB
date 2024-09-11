#include<stdio.h>
#include <math.h>
int main()
{
           int i,N,sum=0,num;
          printf("program to checck the num is armstrong or not");
          printf("\nenter the number N");
          scanf("%d",&N);
          num=N;
          while(num>0)
          {
          i=num%10;
          sum=sum+pow(i,3);
          num=num/10;
          }
          if(sum==N)
          {
          printf("armstrong");
          }
          else
          {
          printf("not armstrong");
          }
          
return 0;
}