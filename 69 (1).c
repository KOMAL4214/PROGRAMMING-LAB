#include <stdio.h>
int main()
{
int i,j,n;
printf("\nprogram to know repetition of a number in an array");
printf("\nenter the size of array");
scanf("%d",&n);
int a[n];
printf("\nenter the values of array");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    }
    printf("\narray:\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\nenter the search element");
    scanf("%d",&j);
       for(i=0;i<n;i++)
         {
             if(a[i]==j)
             {
                printf("\nthe element %d is present at position %d",j,i);
             }
             else 
             {
             printf("\nthe element %d is not present at position %d",j,i);
             }
          }
          
	return 0;
}
    