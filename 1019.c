#include <stdio.h>

int main (void)
{
    int a, m, s;
    scanf("%d", &a);
    s = a % 60;
    a /= 60;
    m = a % 60;
    a /= 60;
    printf("%d:%d:%d\n", a, m, s);
    return 0;
}