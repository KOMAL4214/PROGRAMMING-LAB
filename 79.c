#include <stdio.h>
int swap(int x,int y);
int main()
{
int x,y;
printf("\nenter the numbers");
scanf("%d %d",&x,&y);
printf("\nx=%d,y=%d",x,y);
swap(x,y);
}
int swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
printf("\nx=%d,y=%d",x,y);
 }
 

