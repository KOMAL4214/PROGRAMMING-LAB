#include<stdio.h>
int n(int nfact,int rfact);
int main()
{
int nfact,rfact;
printf("\nprogram to find nCr");
printf("\nenter the values of n and r");
n(nfact,rfact);
}
int n(int nfact,int rfact)
{
int i,n,r,fact=1,kon=1,nCr,n1,r1;
  scanf("%d %d",&n,&r);
  if(n>0&&r>0)
  {
  n1=n;
  for(i=1;i<=r;i++)
{
    fact=fact*n;
    n--;
 }
 nfact=fact;
 r1=r;
 while(r>0)
{
kon=kon*r;
r--;
}
rfact=kon;
nCr=nfact/rfact;
printf("the value of %dC%d is :",n1,r1);
printf("%d",nCr);
}
else 
{
printf("not possible");
}
 }
  
    