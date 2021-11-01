//Write a program in C to find the sum of all elements of the array.
// [Addon] Find Sum of Even and Odd numbers present in array & Sum of Odd and Even Position Elements of an array.

#include <stdio.h>
int main()
{
    int n, sum = 0, sum_even = 0, sum_odd = 0, sum_at_even_pos = 0, sum_at_odd_pos = 0;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    int a[n];
    printf("Input %d elements in the array \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    //print all elements of array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    //sum of all elements
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 2 == 0)
        {
            sum_even += a[i];
        }
        else
        {
            sum_odd += a[i];
        }
        if (i % 2 == 0)
        {
            sum_at_even_pos += a[i];
        }
        else
        {
            sum_at_odd_pos += a[i];
        }
    }
    printf("\n%d is the sum of all elements\n", sum);
    printf("%d is the sum of even elements\n", sum_even);
    printf("%d is the sum of odd elements\n", sum_odd);
    printf("%d is the sum of even positionelements\n", sum_at_even_pos);
    printf("%d is the sum of odd position elements\n", sum_at_odd_pos);

    return 0;
}