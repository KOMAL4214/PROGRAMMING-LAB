#include<stdio.h>
int main()
{
    int i,j,sum=0,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n][n],trans[n][n];
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix of A\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[i][j]=arr[j][i];
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
}
