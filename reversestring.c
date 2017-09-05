#include<stdio.h>
#include<string.h>
void main()
{
char a[100],t;
int i,j=0;
printf("enter the string");
gets(a);
i=0;
j=strlen(a)-1;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
i++;
j--;
}
printf("reverse string is %s",a);
}
