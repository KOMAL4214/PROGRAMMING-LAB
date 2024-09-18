#include<stdio.h>
int main()
{
    int i,j,sum=0,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("sum of %d row=%d\n",i,sum);
        sum=0;
    }
}
