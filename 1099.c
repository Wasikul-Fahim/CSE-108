#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);

    int a[n][2], aux;
    int sum;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
        if(a[i][0] > a[i][1])
        {
            aux = a[i][0];
            a[i][0] = a[i][1];
            a[i][1] = aux;
        }
        sum = 0;
        for(int j = a[i][0] + 1; j < a[i][1]; j++)
        {
            if(j % 2 != 0) sum += j;
        }
        printf("%d\n",sum);
    }
    
    return 0;
}