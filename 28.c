#include<stdio.h>
#include <math.h>
int main()
{
           int k=0,i,m,N,sum=0,num;
          printf("program to checck the num is armstrong or not");
          printf("\nenter the number N");
          scanf("%d",&N);
          num=N;
          m=N;
           while(m>0)
           {
           m=m/10;
           k++;
           }
          while(num>0)
          {
          i=num%10;
          sum=sum+pow(i,k);
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
