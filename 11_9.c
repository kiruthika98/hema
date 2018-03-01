#include<stdio.h>
int main()
{
int a[10],t,i,j;
printf("enter the array values");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=aj];
a[j]=t;
}
}
}
printf("%d",a[0]);
return 0;
}

