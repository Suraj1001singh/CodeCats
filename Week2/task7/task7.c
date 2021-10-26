// number of zeros in n!
#include <stdio.h>
#include <math.h>
int recursive(int num, int n)
{
    if ((int)(num / pow(5, n)) == 0)
    {
        return 0;
    }

    else
    {
        return (int)(num / pow(5, n)) + recursive(num, n + 1);
    }
}
int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", recursive(arr[i], 1));
    }

    return 0;
}