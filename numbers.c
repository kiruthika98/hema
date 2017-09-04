#include<stdio.h>
void main()
{
int n;
int count=0;
printf("enter the digits");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("the no of digits are %d",count);
}
