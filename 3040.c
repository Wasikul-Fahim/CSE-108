#include <stdio.h>

void valid_tree(int height, int diameter, int branch);

int main(voi)
{
    int t_case, i;
    int height, diameter, branch;
    scanf("%d", &t_case);

    for(i = 0; i < t_case; i++)
    {
        scanf("%d %d %d", &height, &diameter, &branch);
        valid_tree(height, diameter, branch);

    }

}



void valid_tree(int height, int diameter, int branch)
{
    int flag = 0;
    // checking height
    if((height < 200) || (height > 300))
    {
        flag = 1;
    }

    //Checking Diameter
    if(diameter < 50)
    {
        flag = 1;
    }

    //Checking Branches
    if(branch < 150)
    {
        flag = 1;
    }

    //Printing Validity
    if(flag == 1)
    {
        printf("Nao\n");
    }
    else
    {
        printf("Sim\n");
    }

}
