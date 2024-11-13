#include<stdio.h>
int main()
{
int i,q,num,n,count;
printf("FIND DIGITS");
printf("\nenter the number of testcases");
scanf("%d",&i);
while(i>0)
{
    count=0;
printf("\nenter the number");
scanf("%d",&n);
num=n;
while(num>0)
{
    q=num%10;
    if(q!=0)
    {
        if(n%q==0)
        {
            count=count+1;
        }
    }
    num=num/10;
}
printf("no. of digits that can divde the number :%d",count);
i--;
}
}
