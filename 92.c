#include<stdio.h>
int main()
{
int n,i;
printf("enter the size of array");
scanf("%d",&n);
int  *ptr,a[n];
printf("enter the list of elements");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 ptr=&a[0];
 for(i=0;i<n;i++)
{
 if(*ptr<=a[i])
 {
 ptr=&a[i];
 }
 }
 printf("\nmax element is %d",*ptr);
return 0;
}