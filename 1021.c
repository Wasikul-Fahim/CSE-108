#include <stdio.h>
#include <math.h>

int main (void)
{
    float bill, unit;
    scanf("%f", &bill);
    printf("NOTAS:\n");

    unit = floor(bill / 100);
    printf("%.0f nota(s) de R$ 100.00\n", unit);
    bill = bill - (unit * 100);

    unit = floor(bill / 50);
    printf("%.0f nota(s) de R$ 50.00\n", unit);
    bill = bill - (unit * 50);

    unit = floor(bill / 20);
    printf("%.0f nota(s) de R$ 20.00\n", unit);
    bill = bill - (unit * 20);

    unit = floor(bill / 10);
    printf("%.0f nota(s) de R$ 10.00\n", unit);
    bill = bill - (unit * 10);

    unit = floor(bill / 5);
    printf("%.0f nota(s) de R$ 5.00\n", unit);
    bill = bill - (unit * 5);

    unit = floor(bill / 2);
    printf("%.0f nota(s) de R$ 2.00\n", unit);
    bill = bill - (unit * 2);

    printf("MOEDAS:\n");

    unit = floor(bill / 1);
    printf("%.0f moeda(s) de R$ 1.00\n", unit);
    bill = bill - (unit * 1);

    unit = floor(bill / 0.5);
    printf("%.0f moeda(s) de R$ 0.50\n", unit);
    bill = bill - (unit * 0.5);

    unit = floor(bill / 0.25);
    printf("%.0f moeda(s) de R$ 0.25\n", unit);
    bill = bill - (unit * 0.25);

    unit = floor(bill / 0.1);
    printf("%.0f moeda(s) de R$ 0.10\n", unit);
    bill = bill - (unit * 0.1);

    unit = floor(bill / 0.05);
    printf("%.0f moeda(s) de R$ 0.05\n", unit);
    bill = bill - (unit * 0.05);

    unit = (bill / 0.01);
    printf("%.0f moeda(s) de R$ 0.01\n", unit);

}
