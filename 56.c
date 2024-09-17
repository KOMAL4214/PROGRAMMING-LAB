#include<stdio.h>
int main()
{
        int i,negative=0,positive=0,zero=0;
        int arr[10];
        printf("enter the numbers");
        for(i=1;i<=10;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=1;i<=10;i++)
        {
            if(arr[i]>0)
            {
                positive=positive+1;
            }
            else if(arr[i]<0)
            {
                negative=negative+1;
            }
            else if(arr[i]==0)
            {
                zero=zero+1;
            }
        }
        printf("number of positive numbers=%d",positive);
        printf("\nnumber of negative numbers=%d",negative);
        printf("\nnumber of zero elements=%d",zero);
}
