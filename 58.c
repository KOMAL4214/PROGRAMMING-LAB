#include<stdio.h>
int main()
{
        int i,n;
        printf("enter the size of array");
        scanf("%d",&n);
        int a[n],b[n],c[n];
        printf("enter the elements of array a");
        for(i=1;i<=n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("enter the elements of array b");
         for(i=1;i<=n;i++)
        {
                scanf("%d",&b[i]);
        }
         for(i=1;i<=n;i++)
        {
                c[i]=a[i]+b[i];
        }
        printf("addition of two arrays\n");
         for(i=1;i<=n;i++)
        {
                printf("%d\t",c[i]);
        }
}
