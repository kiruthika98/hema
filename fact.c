#include<stdio.h>
void main()
{
int f=1;
int i,n;
printf("enter the non negative integers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("the factorial of %d is %d",n,f);
}
