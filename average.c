#include<stdio.h>
void main()
{
int a,n,i;
int b[10];
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
n=a/2;
printf("%d",b[n]);
}



