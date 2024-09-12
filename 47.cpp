#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the values of n");
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			switch(j)
			{
				case 1:printf("\nA");
				break;
				case 2:printf("B");
				break;
				case 3:printf("C");
				break;
				case 4:printf("D");
				break; 
			}
		}
		printf("\n");
	 } 
}
