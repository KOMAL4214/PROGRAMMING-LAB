#include<stdio.h>
int main()
{
        int i,n;
        printf("enter the size of array");
        scanf("%d",&n);
        int a[n];
        printf("enter the elements of array");
        for(i=1;i<=n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=n;i>0;i--)
        {
                printf("%d\t",a[i]);
        }

}
