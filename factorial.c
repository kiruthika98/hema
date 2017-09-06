#include<stdio.h>
void main()
{
int fact=1;
int i,num;
printf("enter the non negative integers");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("Factorial of %d is %d",num,fact);
}
