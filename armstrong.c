#include<stdio.h>
void main()
{
int a,d,n;
int r=o;
printf("enter the three digits number");
scanf("%d",&n);
d=n;
while(d!=0)
{
a=d%10;
r=a*a*a;
d=d/10;
}
if(r==n)
{
printf("armstrong number");
}
else
{
printf("not an armstrong number");
}
}

