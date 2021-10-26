// Write a C program to check whether a given number is an armstrong number or not.
#include <stdio.h>
// count number of digits
int getCountDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
// get lastmost digit of number
int getDigit(int *num)
{
    int rem = (*num) % 10;
    *num = *num / 10;
    return rem;
}
// get n th power of each digit
int get_nth_multiple(int q, int count)
{
    int mult = 1;
    while (count != 0)
    {
        mult = mult * q;
        count--;
    }
    return mult;
}
// check wheather a number is armstrong or not
void checkArmstrongNumber(int result, int num)
{
    if (result == num)
        printf("Is is Armstrong number");
    else
        printf("It is not Armstronge number");
}

// main execution
int main()
{
    int num, count, result = 0, cnt;
    printf("Enter number : ");
    scanf("%d", &num);
    count = getCountDigits(num);
    cnt = count;
    int orginal_num = num;

    while (count != 0)
    {
        int q = getDigit(&num);
        result += get_nth_multiple(q, cnt);
        count--;
    }
    checkArmstrongNumber(result, orginal_num);
    return 0;
}