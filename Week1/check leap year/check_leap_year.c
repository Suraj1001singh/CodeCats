//---1) year must be multiple of 4 but not 100
//---1) year must be multiple of 400
#include <stdio.h>
int main()
{
    int a;
    printf("Enter year:");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 != 0)
        printf("This is a leap year!");
    else if (a % 400 == 0)
    {
        printf("This is a leap year!");
    }
    else
    {
        printf("This is not a leap year");
    }

    return 0;
}