#include<stdio.h>
int main()
{
int a[10],i,n,t,j,k;
printf("enter the range\n");
scanf("%d",&n);
scanf("%d",&k);
printf("enter the array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d",a[k-1]);
return 0;
}
