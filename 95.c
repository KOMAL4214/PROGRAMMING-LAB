#include <stdio.h>
struct empdetails 
{
char empname[44];
int empnum;
float emppay;
};
int main()
{
int n,i;
     struct empdetails *ptr;
     printf("enter the number of employees");
     scanf("%d",&n);
     struct empdetails emp[n];
     for(i=0;i<n;i++)
     {
      printf("enter employee name");
      scanf("%s",&emp[i].empname);
      printf("enter the employee number");
      scanf("%d",&emp[i].empnum);
      printf("enter the pay to employee");
      scanf("%f",&emp[i].emppay);
      }
      for(i=0;i<n;i++)
     {
     printf("details of %d employee\n",(i+1));
      printf("%s",emp[i].empname);
      printf("\n");
      printf("%d",emp[i].empnum);
     printf("\n");
      printf("%.5f",emp[i].emppay);
      printf("\n");
      }
      
    return 0;
}