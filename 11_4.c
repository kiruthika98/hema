#include<stdio.h>
#include<math.h>
int main()
{
int N,K,res;
printf("enter the values for N and K");
scanf("%d %d",&N,&K);
res=pow(N,K);
printf("N^K=%d",res);
return 0;
}
