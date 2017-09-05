#include<stdio.h>
void main()
{
int a,d,rev,r;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
rev=rev*10+rev;
a=a/10;
}
if(d==rev)
{
printf("%d is a palindrome",d);
}
else
{
printf("%d is not a palindrome",d);
}
}
