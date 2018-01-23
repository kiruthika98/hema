#include<stdio.h>
int main()
{
int a[10],max,i;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
printf("%d",a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("\n%d",max);
return 0;
}
