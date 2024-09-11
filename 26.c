#include<stdio.h>
int main()
{
           int i,N,even=0,odd;
          printf("program to print off and even b/w 1 to N");
          printf("\nenter the value of N");
          scanf("%d",&N);
          printf("even ");
          for(i=1;i<=N;i++)
          {
          if(i%2==0)
          {
          printf("%d,",i);
          }
          }
          printf("\n");
          printf("odd ");
          for(i=1;i<=N;i++)
          {
          if(i%2==1)
          {
          printf("%d,",i);
          }
          }
          
          
          
          
return 0;
}