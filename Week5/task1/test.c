// Program to Access Elements of Array Using Pointer
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = a;
    int i = 0;
    while (i < 10)
    {
        printf("%d ", *ptr);
        ptr++;
        i++;
    }
    return 0;
}