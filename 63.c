#include<stdio.h>
int main()
{
    int i,j,max,min,n;
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
    max=min=arr[0][0];
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]>=max)
            {
            max=arr[i][j];
            }
            else if(arr[i][j]<=min)
            {
            min=arr[i][j];
            }
        }
    }
    printf("maximum number =%d",max);
    printf("minimum number=%d",min);
}
