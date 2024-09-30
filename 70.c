#include <stdio.h>
int main()
{
int i,j,n,occu=0;
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
    for(j=0;j<n;j++)
    {
       for(i=0;i<n;i++)
         {
             if(a[j]==a[i])
             {
                occu=occu+1;
             }
          }
          printf("\nthe number %d of times occured =%d",a[j],occu);
          occu=0;
          }

	return 0;
}
    