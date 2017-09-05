#include<stdio.h>
void main()
{
int n,i;
int count=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if((n%i)==0)
{
count++;
}
}
if(count==1)
{
printf("%d IS PRIME NUMBER",n);
}
else
{
printf(" %d IS NOT A PRIME NUMBER",n);
}
}
