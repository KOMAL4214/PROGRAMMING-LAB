#include<stdio.h>
int main()
{
        int i,max,secmax,n;
        printf("enter the size of array");
        scanf("%d",&n);
        int arr[n];
        printf("enter the numbers");
        for(i=1;i<=n;i++)
        {
                scanf("%d",&arr[i]);
           if(i==1)
           {
               max=secmax=arr[i];
           }
           if(arr[i]>=max)
           {
               secmax=max;
               max=arr[i];
           }
           else if(arr[i]<secmax)
           {
               secmax=arr[i];
           }

        }
        printf("max num=%d",max);
        printf("\n secmax num=%d",secmax);
}
