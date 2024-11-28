
#include <stdio.h>
int function(int x,int y);
int main()
{
    int n,i,s;
    printf("enter no.of students");
    scanf("%d",&n);
    printf("enter number of subjects");
    scanf("%d",&s);
    for(i=1;i<=n;i++)
    {
        function(i,s);
    }

    return 0;
}
int function(int x,int y)
{
    int S=0,i,m;
    printf("student %d marks\n",x);
    for(i=1;i<=y;i++)
    {
        printf("enter subject %d marks\n",i);
        scanf("%d",&m);
        S=S+m;
    }
    if(S>500)
    {
        printf("student %d have scored more than 500\n",x);
    }
    
}
