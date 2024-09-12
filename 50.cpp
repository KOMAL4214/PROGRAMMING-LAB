#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
		 switch(i)
		 {
		 	case 1:printf("A");
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
