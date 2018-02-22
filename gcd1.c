#include <stdio.h>
void main()
{
    int n0, n1, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n0, &n1);

    for(i=1; i <= n0 && i <= n1; ++i)
    {
       
        if(n0%i==0 && n1%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n0, n1, gcd);
}
