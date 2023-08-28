#include <stdio.h>

double input_amount (void);

double convert_to_euro (double usd);

double convert_to_gbp (double usd);

int main(void) 
{
    double cnvrt, amount;
    amount = input_amount();
    int method;
    printf("Convert to:\n1. EUR\n2. GBP\nEnter your choice: ");
    scanf("%d", &method);

    if (method == 1)
    {
        cnvrt = convert_to_euro(amount);
        printf("Conversion Result:\nAmount: %.2lf (USD) is equivalent to %.2lf (EUR)\n", amount, cnvrt);
    }
    else if (method == 2)
    {
        cnvrt = convert_to_gbp(amount);
        printf("Conversion Result:\nAmount: %.2f (USD) is equivalent to %.2f (GBP)\n", amount, cnvrt);
    }
    else
    {
        printf("invalid input\n");
        return 0;
    }

    return 0;

}

double input_amount (void)
{
    double a;
    printf("Enter the amount to be converted: ");
    scanf("%lf", &a);
    return a;
}

double convert_to_euro (double usd)
{
    double a = usd * 0.85;
    return a;
}

double convert_to_gbp (double usd)
{
    double a = usd * 0.73;
    return a;
}