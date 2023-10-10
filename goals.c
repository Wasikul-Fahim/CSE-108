#include <stdio.h>

int main (void)
{
    int a , b, cs; // goals in each match
    int inter = 0, gremio = 0, draw = 0; // match results
    int games = 0;
    while (1)
    {
        scanf("%d %d", &a, &b);

        //calculating match results
        if(a > b)
        {
            inter++;
        }
        else if(a < b)
        {
            gremio++;
        }
        else
        {
            draw++;
        }
        games++;

        printf("Novo grenal (1-sim 2-nao)\n");

        scanf("%d", &cs);

        //checking if breaked
        if(cs != 1)
        {
            break;
        }

    }

    //printing results
    printf("%d grenais\n", games);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draw);

    if(inter > gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if(inter < gremio)
    {
        printf("Gremio venceu mais\n");
    }
    else
    {
        printf("Nao houve vencedor\n");
    }

}
