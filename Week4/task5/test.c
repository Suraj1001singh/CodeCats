// SET 0,1,2 in an array
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    //taking array as input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k = floor(n / 3);
    for (int i = 0; i < k; i++)
    {
        a[i] = 0;
    }
    for (int i = k; i < 2 * k; i++)
    {
        a[i] = 1;
    }
    for (int i = 2 * k; i < n; i++)
    {
        a[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}