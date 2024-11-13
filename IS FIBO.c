#include<stdio.h>
int main()
{
int i=0,n1,n2,n3,k,n;
printf("IS FIBO");
printf("\nenter the number");
scanf("%d",&n);
n1=0;
n2=1;
int arr[n];
while(n3<=n&&i<=n)
{
n3=n1+n2;
n1=n2;
n2=n3;
arr[i]=n3;
i++;
}
for(i=0;i<=n;i++)
{
if(n==arr[i])
{
printf("the number is in fibonacci series");
}
}
}
