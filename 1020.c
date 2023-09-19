#include <stdio.h>

int main (void)
{
    int age, year, month;
    scanf("%d", &age);
    year = age / 365;
    age %= 365;
    month = age / 30;
    age %= 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, age);
    return 0;
}
