#include<stdio.h>
int main()
{
char a[20];
int i,count=0,count1=0;
scanf("%[^\n]s",&a);
for(i = 0; s[i] !='\0'; i++)
{
if(isdigit(s[i])
{
count1++;
}
if(((s[i]>'a')&&(s[i]<'z'))||((s[i]>'A')&&(s[i]<'Z')))
{
     count++;
}
if((count>0)&&(count1>0))
printf("yes");
else
printf("no");
return 0;
}

