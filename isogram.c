#include<stdio.h>
#include<string.h>
void main()
{
int a[20],n,k,l,i,flag=0;
char s[20];
scanf("%[^\n]s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==s[i+1])
    flag=1;
}
if(flag==1)
printf("\nNO");
else
printf("\n YES");
}
