
// Write a C program to determine whether a given number is prime or not.

#include <stdio.h>
int main()
{
    int a, flag = 0;
    printf("Enter the number :");
    scanf("%d", &a);
    for (int i = 2; i <= (a / 2); i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is prime number", a);
    else
        printf("%d is not a  prime number", a);
    return 0;
}