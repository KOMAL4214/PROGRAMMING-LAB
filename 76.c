#include<stdio.h>
int odd(int n);
int main()
{
int n;
odd(n);
}
int odd(int n)
{
printf("enter the number");
scanf("%d",&n);
if(n%2==0)
{
printf("\neven number");
}
else
printf("\nodd number");
 }