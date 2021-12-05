#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int flag = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem == 0)
        {
            flag = 1;
            break;
        }
        n = n / 10;
    }
    if (flag)
        printf("It is duck number");
    else
        printf("it is not a duck number");
    return 0;
}