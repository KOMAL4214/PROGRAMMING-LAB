#include <stdio.h>
int palindrome(int n);
int main()
{
int n;
printf("\nenter the number");
scanf("%d",&n);
palindrome(n);
}
int palindrome(n)
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
 sum=sum+rem*pow(10,i-1);
 num=num/10;
 i--;
 }
 if(n==sum)
 {
 printf("the num is palindrome");
 }
 else
 {
 printf("the num is not palindrome");
 }
 }
 

