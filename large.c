#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter three numbers:");
scanf("%d %d %d",&n1,&n2,&n3);
printf("to find largest of three numbers");
if((n1>n2)&&(n1>n3))
{
printf("%d is larger",n1);
}
else if((n2>n1)&&(n2>n3))
{
printf("%d is larger",n2);
}
else
{
printf(%d is larger",n3);
}
}
