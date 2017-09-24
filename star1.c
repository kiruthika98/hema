#include<stdio.h>
void main()
{
int n;
n=5;
for(i=0;i<=n;i++)
{
for(j=i+1;j>i;j--)
{
printf("*");
}
printf("\n");
}
}
