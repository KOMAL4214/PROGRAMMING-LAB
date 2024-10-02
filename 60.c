#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array\n");
    for( i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    for( i=0;i<n;i++)
    {
        int min = a[i];
        for(j = i+1;j<n;j++)
        {
            if(a[j]<=min)
            {
                min = a[j];
            }
        }
        int  anum;
        for(k =i;k<n;k++)
        {
            if(a[k] == min)
            {
                anum= k;
            }
        }
        int temp = a[i];
        a[i] = min;
        a[anum] = temp;
    }
    printf("\nsorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}