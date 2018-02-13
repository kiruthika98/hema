#include<stdio.h>
#include<math.h>
int main()
{
   float celsius,kelvin;
   printf("enter the temperature in celsius\n");
   scanf("%f",&celsius);
   kelvin=celsius+273;
   printf("%.0f",kelvin);
   return 0;
}
