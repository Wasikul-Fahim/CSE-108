#include <stdio.h>

int main ()
{
    int n, max = 0;
    for(int i = 0; i < 3; i++)
    {
        scanf(" %d", &n);
        if (max < n)
        {
            max = n;
        }
    }
    printf("%d eh o maior\n", max);
    return 0;
}
