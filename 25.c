#include<stdio.h>
int main()
{
           int x,i,n,k;
          printf("program to print multiplication table");
           printf("\nenter the value of number");
           scanf("%d %d",&k,&x);
           for(i=1;i<=x;i++)
           {
           n=k*i;
           printf("%d  x  %d=%d",k,i,n);
           printf("\n");
           }
          
          
return 0;
}