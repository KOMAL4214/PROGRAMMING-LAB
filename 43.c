#include<stdio.h>
#include <math.h>
int main()
{
           float sales,commission;
           printf("program to read  sales and print commission");
           printf("\nenter the values of sales");
           scanf("%f",&sales);
           if(sales<=500)
           {
           commission=500*(0.05);
           printf("%f",commission);
           }
           else if(sales>500&&sales<=2000)
           {
           commission=35+(sales-500)*(0.1);
           printf("%f",commission);
           }
           else if(sales>2000&&sales<=5000)
           {
           commission=185+(sales-2000)*(0.12);
           printf("%f",commission);
           }
           else if(sales>5000)
           {
           commission=sales*(0.125);
           printf("%f",commission);
           }
           
return 0;
}