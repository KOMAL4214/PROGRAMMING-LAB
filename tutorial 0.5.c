#include<stdio.h>
int main()
{
    int dnum,m,k=0;
    printf("enter the decimal number : \n");
    scanf("%d",&dnum);
    m=dnum;
    while(m>0)
    {
        m/=2;
        k++;
    }
    int bnum[k];
    for(int i=0;i<k;i++)
    {
        bnum[i]=dnum%2;
        dnum=dnum/2;
    }
    for(int i=k-1;i>=0;i--)
    {
        printf("%d",bnum[i]);
    }
}