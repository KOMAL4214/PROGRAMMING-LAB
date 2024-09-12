#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		 	if(i==j)
		 	{
		 		printf("1");
			 }
			 else if(i>j||i<j)
			 {
			 	printf("0");
			 }
		}
		printf("\n");
	 } 
}
