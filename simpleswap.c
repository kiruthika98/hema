#include<stdio.h>
int main()
{
int one,two;
scanf("%d %d",&one,&two);
one=one+two;
two=one-two;
one=one-two;
printf("%d %d",one,two);
return 0;
}
