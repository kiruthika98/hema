#include<stdio.h>
int main()
{
    int a,n,t,rev;
    scanf("%d",&a);
    while(a!=0)
    {
       n=a%10;
       rev=rev*10+n;
       a=a/10;
    }
    while(rev!=0)
    {
        t=rev%10;
        if(t%2!=0)
        {
            printf("%d ",t);
            
        }
        rev=rev/10;
        
    }
    return 0;
}
