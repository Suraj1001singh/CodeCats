//  Count Total Number of occurrences of a given element in an array.
#include <stdio.h>
int main()
{
    int n, num, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}