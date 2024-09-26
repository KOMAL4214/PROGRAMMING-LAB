#include<stdio.h>
int main()
{
      int i,j,k=1,n;
      printf("program of bubble sort");
      printf("\nenter the size of the array");
      scanf("%d",&n);
      int a[n],b[n];
      printf("enter the values of the array");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
      printf("%d\t",a[i]);
      }
      for(j=0;j<n;j++)
      {
      i=0;
      for(i=0;i<n-k;i++)
      {
      if(a[i]<a[i+1])
      {
      b[i]=a[i];
      a[i]=a[i+1];
      a[i+1]=b[i];
      }
      }
      k++;
      }
      printf("\n");
      for(i=0;i<n;i++)
      {
      printf("%d\t",a[i]);
      }
      return 0;
      }