#include <stdio.h>

int main (void)
{
    //declaring variables
    int t, i, n;

    long long a = 0, b = 1, c, fib[61];

    //scanning for test cases
    scanf("%d", &t);

    for(i = 0; i <= 61; i++)
    {
        if (i == 0)
        {
            fib[i] = 0;
        }
        else if (i == 1)
        {
            fib[i] = 1;
        }
        else
        {
            c = a + b;
            fib[i] = c;
            a = b;
            b = c;
        }
    }

    while(t--)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
    }
    return 0;

}
