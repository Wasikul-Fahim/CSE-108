#include <stdio.h>

int main (void)
{
    float unit,prices[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int i;
    scanf("%d %f", &i, &unit);

    printf("Total: R$ %.2f\n", prices[i - 1] * unit);


    return 0;
}