#include<stdio.h>
void main()
{
int i,f0,f1,last,N;
f0=0;
f1=1;
printf("enter the limits");
scanf("%d",&last);
printf("fibonacii series");
printf("%d %d",f0,f1);
for(i=2;i<=last;i++)
{
n=f0+f1;
f0=f1;
f1=n;
printf("%d\t",n);
}
}
