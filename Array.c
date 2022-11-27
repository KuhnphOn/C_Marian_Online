#include <stdio.h>
int main()
{
    int i, j;
    float cost[5][5]={ {1.0,2.0,3.0,4.0,5.0},
                       {11.1,22.22,33.33,44.44,55.55},
                       {0,0,3.3,4.4,5.5},
                       {0,0,0,0,0} };
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf(" %.2f ",cost[i][j]);
        }
        printf("\n");
    }

    return 0;
}
