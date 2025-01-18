#include<stdio.h>
int main()
{
    printf("program to rotate an array as right rotation : \n");
    int n,k,t=1;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    printf("enter the no of rotaions :  ");
    scanf("%d",&k);
    int a[n],b[n];
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if((i+k)<n)
        {
            a[i+k]=b[i];
        }
        else
        {
            a[(n-i-k<0)?(-(n-i-k)):(0)]=b[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}