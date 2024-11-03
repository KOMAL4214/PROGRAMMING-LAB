#include<stdio.h>
int Fibonacci(int n1,int n2,int n);
int main()
{
  static int n1,n2,n;
  printf("enter the number");
  scanf("%d",&n);
  n1=0;
  n2=1;
  printf("%d,",n1);
  printf("%d,",n2);
  Fibonacci(n1,n2,n);
  }
  int Fibonacci(int n1,int n2,int n)
  {
  static int temp;
  if(temp<n)
  {
  temp=n1+n2;
    printf("%d,",temp);
    n1=n2;
    n2=temp;
  Fibonacci(n1,n2,n);
  }
  else
  {
  printf("\nit is the Fibonacci series");
  }
return 0;
}