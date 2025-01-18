#include<stdio.h>
int main()
{
    int n1,n2,temp;
    static int j=0;
    printf("enter the size of the two ascending order arrays : ");
    scanf("%d %d",&n1,&n2);
    int a[n1],b[n2];
    int c[n1+n2];
    printf("enter the 1st array elements \n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the 2nd array elements \n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n1+n2&&j<n2;i++)
    {
        if(i<n1)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[j];
            j++;
        }
    }
    for(int i=0;i<n1+n2-1;i++)
    {
        for(int j=i+1;j<=n1+n2-1;j++)
        {
            if(c[i]>=c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d\t",c[i]);
    }
}