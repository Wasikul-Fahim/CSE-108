#include <stdio.h>

int main (void)
{
    int unsort[3], sorted[3], v;
    scanf(" %d %d %d", &unsort[0], &unsort[1], &unsort[2]);
    for(int i = 0; i < 3; i++)
    {
        sorted[i] = unsort[i];
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(sorted[i] < sorted[j])
            {
                v = sorted[j];
                sorted[j] = sorted[i];
                sorted[i] = v;
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", sorted[i]);
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", unsort[i]);
    }


    return 0;
}