#include<stdio.h>
void main()
{
int n;
printf("enter the year");
scanf("%d",&n);
if((n%4)&&(n%100)&&(n%400))
{
printf("%d is a leap year",n);
}
}
