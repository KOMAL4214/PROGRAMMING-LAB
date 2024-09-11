#include<stdio.h>
int main()
{
           int i,j,x,sum,sub,mul,div;
          printf("simple calculator");
          printf("\nenter the values of i and j");
          scanf("%d %d",&i,&j);
          printf("\nenter the num 1-+,2--,3-*,4-/");
          scanf("%d",&x);
          sum=i+j;
          sub=i-j;
          mul=i*j;
          div=i/j;
          switch(x)
          {
                case 1:printf("sum=%d",sum);
                break;
                case 2:printf("sub=%d",sub);
                break;
                case 3:printf("mul=%d",mul);
                break;
                case 4:printf("div=%d",div);
                break;
                default:printf("not a simple calculation");
                break;
          }      
          
return 0;
}