#include <stdio.h>
int freq[10000] = {0};
int main()
{
    int n;

    scanf("%d", &n);
    int a[n];
    //taking array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //calculating freq of elements
    for (int i = 0; i < n; i++)
    {
        freq[a[i]] += 1;
    }
    //printing freq
    for (int i = 0; i < n; i++)
    {
        if (freq[a[i]] > 0)
        {
            printf("%d : %d\n", a[i], freq[a[i]]);
            freq[a[i]] = 0;
        }
    }

    return 0;
}