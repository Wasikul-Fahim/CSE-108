#include <stdio.h>

int main (void)
{
    double a, b, c, d, mid1, mid2;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    mid1 = ((a * 2) + (b * 3) + (c * 4) + d) / (10.0);

    printf("Media: %.1f\n", mid1);

    if(mid1 >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (mid1 >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf(" %lf", &mid2);
        printf("Nota do exame: %.1lf\n", mid2);

        if( (mid1 + mid2) / 2.0 > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media: final: %.1lf\n", (mid1 + mid2) / 2.0);
        
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}