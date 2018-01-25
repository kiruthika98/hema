#include<stdio.h>
int main()
{
char a[5];
int l,B=0;
l=strlen(a);
scanf("%s",&a);
for(i=0;i<l-1;i++)
{
switch(a[i])
{
case 'I':
        B=B+1;
        break;
case 'V':
        B=B+5;
        break;
case 'x':
        if((l-1)==2)&&(B%2==1))
        {
        B=B+10-2;
        }
        else if(l-1)==3)&&(B%2==1))
        {
        B=B+10-2;
        }
        else
        {
        B=B+10;
        }
        break;
default :
      printf(" ");
}
printf("%d",B);
return 0;
}
