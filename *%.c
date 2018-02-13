#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,value;
   scanf("%d %d %d",&a,&b,&c);
   value=(a*b%c);
   printf("%d",value);
   return 0;
}
