#include<stdio.h>
#include<string.h>
int main()
{
int n,i,val;
char a[10];
printf("enter the string and value of n");
scanf("%s %d",&a,&n);
l=strlen(a);
val=l-n;
for(i=val;i<l;i++)
{
printf("%c",a[i]);
}
return 0;
}
