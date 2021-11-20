// Program to Find Largest Number Using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *data;
    int n;
    printf("Enter number of elements :");
    scanf("%d", &n);
    data = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", data + i);
    }
    for (int i = 1; i < n; i++)
    {
        if (*data < *(data + i))
        {
            *data = *(data + i);
        }
    }
    printf("\n largest number is : %d", *data);

    return 0;
}