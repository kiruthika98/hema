#include<stdio.h>
int main()
{
char str[30],s;
int i,j;
printf("\nEnter a string number");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
for(j=i+1;str[j]!='\0';j++)
{
if(str[i]>str[j])
{
s=str[i];
str[i]=str[j];
str[j]=s;
}
}
}
  printf("the lexographical order is %s",str);
  return 0;
  }
