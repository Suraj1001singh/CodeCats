// Write a C program to calculate the factorial of a given number.

#include <stdio.h>
long int fact(long int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("factorial is : %ld", fact(num));
    return 0;
}
