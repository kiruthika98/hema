#include<stdio.h>
void main()
{
    int i,j,s1,s2;
    s1s2=0;
    for(i=1;i<=15;i++)
    {
            s1=s1+i;
    }
     printf("sum of 1 t0 15 is %d",s1);
     for(j=15;j<=45;j++)
     {
         if((j%2)!=0)
         
       {
            s2=s2+j;
        
        }
     }
     printf("\n");
     printf(" sum of odd numbers from 15 to 45 is %d",s2);
}


