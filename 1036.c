#include <stdio.h>
#include <math.h>


int main (void)
{
    double a, b, c,t, R1, R2;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(((b*b)-4*a*c)<0 ||a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        t = sqrt((b*b)-4*a*c);
        R1 = ((-b + t) / (2 * a));
        R2 = ((-b - t) / (2 * a));

        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }

}