#include<stdio.h>
int main()
{
int i,n;
printf("enter the size of the array");
scanf("%d",&n);
int a[n],b[n],*ptr[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
ptr[i]=&a[i];
}
printf("\nthe array elements are:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nthe copied array is");
for(i=0;i<n;i++)
{
b[i]=*ptr[i];
printf("%d\t",b[i]);
}
return 0;
}
