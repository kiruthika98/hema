#include <stdio.h>
int main()
{
    int n, Num = 0, remain;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remain = n%10;
        Num = Num*10 + remain;
        n /= 10;
    }

    printf("Reversed Number = %d", Num);
}
