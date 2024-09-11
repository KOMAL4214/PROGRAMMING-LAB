#include<stdio.h>
#include <math.h>
int main()
{
           float units,charge;
           printf("program to read unitsand print charge");
           printf("\nenter the values of units");
           scanf("%f",&units);
           if(units>=0&&units<=200)
           {
             charge=units*(0.5);
           printf("%f",charge);
           }
           else if(units>=210&&units<=400)
           {
           charge=100+(units-200)*(0.65);
           printf("%f",charge);
           }
           else if(units>=401&&units<=600)
           {
           charge=230+(units-400)*(0.8);
           printf("%f",charge);
           }
           else if(units>600)
           {
           charge=425+(units-600)*(125);
           printf("%f",charge);
           }
           
return 0;
}