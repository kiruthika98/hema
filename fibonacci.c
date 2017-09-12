#include<stdio.h>
void main()
{
int i,f1,f2,last,N;
f1=0;
f2=1;
printf("enter the limits");
scanf("%d",&last);
printf("fibonacii series");
printf("%d %d",f1,f2);
for(i=2;i<=last;i++)
{
n=f1+f2;
f1=f2;
f2=n;
printf("%d\t",n);
}
}
