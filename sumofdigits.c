#include<stdio.h>
int main()
{
int a,rem=0;
scanf("%d",&a);
while(a!=0)
{
rem=rem+(a%10);
a=a/10;
}
printf("%d",rem);
return 0;
}
