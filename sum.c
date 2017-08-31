#include<stdio.h>
void main()
{
int n,sum;
sum=0;
printf("enter n value");
scanf("%d",&n);
A:if(n<=0)
{
sum=sum+n;
n--;
goto A;
}
printf("sum of natural numbers is %d",n);
}
