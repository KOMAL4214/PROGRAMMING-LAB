#include<stdio.h>
int main()
{
        int i,odd=0,even=0;
        int arr[10];
        printf("enter the numbers");
        for(i=1;i<=10;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=1;i<=10;i++)
        {
            if(arr[i]%2==0)
            {
                even=even+1;
            }
            else if(arr[i]%2==1)
            {
                odd=odd+1;
            }
        }
        printf("number of odd numbers=%d",odd);
        printf("\nnumber of even numbers=%d",even);
}
