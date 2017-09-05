#include<stdio.h>
void main()
{
int a,b;
printf("enter the interval");
scanf("%d %d",&a,&b);
for(int i=a;i<=b;i++)
{
if((i%2)==0)
{
printf("%d",i);
}
}
}
