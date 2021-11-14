#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    int b[n];
    //taking array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    //stepping up elements
    for (int i = 0; i < n; i++)
    {
        int index = (k + i) % n;
        b[index] = a[i];
    }
    //printing k stepped array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}