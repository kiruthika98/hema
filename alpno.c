#include<stdio.h>
int main()
{
char a[20];
int i,count=0;
scanf("%[^\n]s",&a);
for(i = 0; s[i] !='\0'; i++)
{
if(((s[i]>48)&&(s[i]<57))&&(((s[i]>=97)&&(s[i]<=122))||((s[i]>=65)&&(s[i]<=90)))
{
count++;
}
}
if(count>0);
printf("yes");
else
printf("no");
return 0;
}

