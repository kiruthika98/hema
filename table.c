#include<stdio.h>
void main()
{
int n,i;
int m=0;
printf("enter the table number");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
m=n*i;
printf("MULTIPLICATIOM TABLE");
printf("%d * %d = %d",n,i,m);
}
}

