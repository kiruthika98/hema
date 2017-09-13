#include <stdio.h>
void main()
{
    int n, rNumber = 0, remain;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remain = n%10;
        rNumber = rNumber*10 + remain;
        n /= 10;
    }

    printf("Reversed Number = %d", rNumber);
}
