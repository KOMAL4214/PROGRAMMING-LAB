#include<stdio.h>
int main()
{
int i,n;
printf("enter the size of the array");
scanf("%d",&n);
int a[n],b[n],*ptr[n];
printf("enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
ptr[i]=&a[i];
}
printf("the array is");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("the copied array in reverse order is");
for(i=0;i<n;i++)
{
b[i]=*ptr[4-i];
printf("%d\t",b[i]);
}
return 0;
}

