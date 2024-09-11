#include<stdio.h>
int main()
{
          int a,b,c,max;
          printf("program to read three nos and print max");
          printf("\nenter the numbers");
          scanf("%d %d %d",&a,&b,&c);
          max=(a>b)?(a>c?a:c):(b>c?b:c);
          printf("max=%d",max);
return 0;
}