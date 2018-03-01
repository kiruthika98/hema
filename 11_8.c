#include<stdio.h>
int main()
{
int a,d,n,result;
printf("enter the starting value,difference,number of value");
scanf("%d %d %d",&a,&d,&n);
result=a+(n-1)*d;
result=result+a;
printf("the sum is %d",result);
return 0;
}
