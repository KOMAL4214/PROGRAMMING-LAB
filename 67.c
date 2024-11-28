#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("enter a elements");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter b elements");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix A");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix B");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",b[i][j]);
        }
        printf("\n");
    }
    printf("new array");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}
