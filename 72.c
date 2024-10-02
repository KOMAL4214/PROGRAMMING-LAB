#include <stdio.h>
int main()
{
int i,j,k,n;
printf("program to rotate an array");
printf("\nenter the size of array");
scanf("%d",&n);
int a[n],b[n];
printf("\nenter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nenter the no of positions to be rotated");
scanf("%d",&j);
k=j;
for(i=0;i<n;i++)
{
if(i+j<=n-1)
{
 b[i+j]=a[i];
 }
 }
 for(i=0;i<j;i++)
 {
     b[i]=a[n-k];
     k--;
  }
  for(i=0;i<n;i++)
{
printf("%d\t",b[i]);
}
  
	return 0;
}