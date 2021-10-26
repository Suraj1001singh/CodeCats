// a program in C to display n terms of natural number and their sum.

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter limit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum : %d", sum);
    return 0;
}