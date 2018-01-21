#include <stdio.h>
int main()
{
    int n, number = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        rem= n%10;
        number = number*10 + rem;
        n /= 10;
    }

    printf("Reversed Number = %d", number);
return o;
  
}
