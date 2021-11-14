//  return indices of the two numbers such that they add up to target
#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    //taking array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    //printing indexes such that a[i]+a[j]=k
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) == k)
            {
                printf("[%d,%d]", i, j);
            }
        }
    }

    return 0;
}