#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("max number is : %d", a);
    else
        printf("max number is :%d", b);
    return 0;
}