#include<stdio.h>
int main()
{
          int i,j,sum=0;
          printf("program to printf sum of digits into individual number");
          printf("\nenter the numbers");
          scanf("%d",&j);
          do
          {
          sum=0;
              do
                    {
                    i=j%10;
                    sum=sum+i;
                    j=j/10;
                     }while(j>0);
                     j=sum;
           }while(sum>9);          
          printf("%d",sum);
          
          
          
               
          
return 0;
}
    