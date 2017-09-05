#include<stdio.h>
void main()
{
int x,y;
 printf("enter the interval");
 scanf("%d %d",&x,&y);
 for(int i=x;i<=y;i++)
 {
     if((i%2)!=0)
     {
         printf("%d",i);
     }
 }
 }
 
