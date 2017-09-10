#include <stdio.h>
#include <math.h>

voidmain()
{
    int n1, n2, i, t1, t2, r, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers between %d an %d are: ", n1, n2);

    for(i = n1 + 1; i < n2; ++i)
    {
        t = i;
        t = i;
        while (t1 != 0)
        {
            t /= 10;
            ++n;
        }

         while (t2 != 0)
        {
            r = t2 % 10;
            result += pow(r, n);
            t2 /= 10;
        }

          if (result == i) {
            printf("%d ", i);
        }

             n = 0;
        result = 0;

    }
}
