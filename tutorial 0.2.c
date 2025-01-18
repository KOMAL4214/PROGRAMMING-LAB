#include<stdio.h>
int main()
{
    float cost;
    int calls;
    printf("enter the number of calls made : ");
    scanf("%d",&calls);
    if(calls>100)
    {
        cost=250+(calls-100)*(1.25);
        printf("the cost is RS.%.4f",cost);
    }
    else
    {
        printf("the cost is RS.100");
    }
}