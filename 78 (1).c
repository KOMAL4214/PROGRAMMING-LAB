#include <stdio.h>
int armstrong(int n);
int main()
{
int n;
printf("\nenter the number");
scanf("%d",&n);
armstrong (n);
}
int armstrong(n)
{
int rem,sum=0,j,i=0,num;
num=n;
j=n;
while(j>0)
{
 j=j/10;
 i++;
 }
 while(num>0)
 {
 rem=num%10;
 sum=sum+pow(rem,i);
 num=num/10;
 
 }
 if(n==sum)
 {
 printf("the num is armstrong num");
 }
 else
 {
 printf("the num is not armstrong num");
 }
 }
 

