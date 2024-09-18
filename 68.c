#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("enter the elements of matrix A");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix A\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the matrix B values");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
              scanf("%d",&b[i][j]);
        }
    }
     printf("matrix B\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { c[i][j]=0;
            for(k=0;k<n;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
       printf("matrix C\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
