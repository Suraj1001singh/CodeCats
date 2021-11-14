// COIN-FLIP GAME

#include <stdio.h>
#include <math.h>
int main()
{
    int t, g, n, i, q, headCount = 0, trailCount = 0;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        scanf("%d", &g);
        for (int j = 0; j < g; j++)
        {
            scanf("%d %d %d", &i, &n, &q);
            if (n % 2)
            {
                //if n is  odd
                if (i == 1)
                {
                    //if initial is head(i=1)
                    trailCount = floor(n / 2) + 1;
                    headCount = n - trailCount;
                }
                if (i == 2)
                {
                    //if initial is trail(i=2)
                    headCount = floor(n / 2) + 1;
                    trailCount = n - headCount;
                }
            }
            else
            {
                //if n is even
                headCount = n / 2;
                trailCount = n / 2;
            }
            if (q == 1)
                printf("%d\n", headCount);
            else
                printf("%d\n", trailCount);
        }
    }

    return 0;
}