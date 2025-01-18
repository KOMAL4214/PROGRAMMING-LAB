#include<stdio.h>
int main()
{
    int n,temp,count=1,k=0;
    static int l=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[i]>=a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
        k++;
        }
    }
    int b[k+1];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count==1&&l<=k)
        {
            b[l]=a[i];
            printf("%d\t",b[l]);
            l++;
        }
        count=0;
    }
}