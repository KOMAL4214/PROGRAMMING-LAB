#include<stdio.h>
int main()
{
        int i,n,sum=0;
        printf("enter the size of the array");
        scanf("%d",&n);
        int arr[n];
        for(i=1;i<=n;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
            sum=sum+arr[i];
        }
        printf("sum =%d",sum);
}
