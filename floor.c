#include<stdio.h>
#include<math.h>
int main()
{
    int p,n,r,si;
    printf("enter the principal amount,rate,time\n");
    scanf("%d %d %d",&p,&n,&r);
    si=((p*n*r)/100);
    printf("%d",floor(si));
    return 0;
}
