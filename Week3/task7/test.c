// C Program to Find Largest and Smallest Element in Array

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //finding max and min
    int max = a[0], min = a[0];
    int max2 = a[0], min2 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max2 = max;
            max = a[i];
        }
        if (min > a[i])
        {
            min2 = min;
            min = a[i];
        }
    }
    printf("max : %d, min : %d\n", max, min);
    printf("second max : %d, second min : %d", max2, min2);
    return 0;
}