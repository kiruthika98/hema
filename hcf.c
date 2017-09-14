#include <stdio.h>
void main()
{
    int n0, n2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&n0,&n1);

    while(n0!=n1)
    {
        if(n0 > n1)
            n0 -= n1;
        else
            n1 -= n0;
    }
    printf("GCD = %d",n0);
}
