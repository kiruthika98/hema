#include<stdio.h>
int main()
{
char a[10],b[10];
int i,j,l;
gets(a);
l=strlen(a);
a[0]=a[0]-32;
printf("%c ",a[0]);
for(i=1;i<=l;i++)
{
if(a[i]==' ')
{
b[i]=a[i+1]-32;
printf("%c",b[i]);
}
else
{
printf("%c",a[i+1];
}
}
return 0;
}
