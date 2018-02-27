#include <stdio.h>

int main()
{
   int ninjas,opponent,num;
   printf("enter the no of ninjas in kabalis warrior");
   scanf("%d",&ninjas);
   printf("enter the no of opponent");
   scanf("%d",&opponent);
   printf("now the calculation of both clans");
  if(ninjas<(2^32)&&opponent<(2^32))
   {
       num=ninjas-opponent;
       printf("%d",num);
       
   }
   return 0;
   }
