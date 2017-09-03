#include<stdio.h>
void main()
{
int y;
printf("enter the year");
scanf("%d",&y);
if((y%4)||(y%100)||(y%400))
{
printf("leap year");
}
else
{
printf("not a leap year");
}
}
