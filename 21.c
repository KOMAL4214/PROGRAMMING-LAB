#include<stdio.h>
int main()
{
           int i,j,sum,sub,mul,div;
           char op;
          printf("simple calculator");
           printf("\nenter the operation ");
          scanf("%c",&op);
          printf("\nenter the values of i and j");
          scanf("%d %d",&i,&j);
          sum=i+j;
          sub=i-j;
          mul=i*j;
          div=i/j;
          switch(op)
          {
                case '+':printf("sum=%d",sum);
                break;
                case '-':printf("sub=%d",sub);
                break;
                case '*':printf("mul=%d",mul);
                break;
                case '/':printf("div=%d",div);
                break;
                default:printf("not a simple calculation");
                break;
          }      
          
return 0;
}