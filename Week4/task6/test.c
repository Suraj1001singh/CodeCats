#include <stdio.h>
int binarySearch(int a[], int l, int r, int x, int *mid)
{

    if (r >= l)
    {
        *mid = l + (r - l) / 2;
        // printf("%d ", *mid);
        if (a[*mid] == x)
        {
            return *mid;
        }
        if (a[*mid] > x)
        {
            //search towards left
            return binarySearch(a, l, *mid - 1, x, mid);
        }
        //else search towars right
        return binarySearch(a, *mid + 1, r, x, mid);
    }
    return *mid;
}
int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    //taking sorted  array as input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int mid = 0;
    printf("%d", binarySearch(a, 0, n - 1, k, &mid));
    return 0;
}