// C program to find power of a number using for loop.

#include <stdio.h>
int main()
{
    int num, n, m, mult = 1;

    printf("input two numbers :");
    scanf("%d %d", &num, &n);
    m = n;
    while (n != 0)
    {
        mult *= num;
        n--;

        /* code */
    }
    printf("%d^%d : %d", num, m, mult);

    return 0;
}