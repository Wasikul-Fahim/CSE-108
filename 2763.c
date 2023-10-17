#include <stdio.h>

int main (void)
{
    //declaring Variable
    int a, b, c, d;

    //Scanning and checking for input
    while (scanf("%d.%d.%d-%d", &a, &b, &c, &d) != EOF);
    {
        //printing till desired length
        printf("%03d\n%03d\n%03d\n%02d\n", a, b, c, d);
    }
    return 0;

}
