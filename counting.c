#include<stdio.h>
void main()
{
int a,count=0;
scanf("%d",&a);
while(a!=0)
{
a=a/10;
++count;
}
printf("the number of numeric digits in a given no is %d",count);
  
  
  
  
}

