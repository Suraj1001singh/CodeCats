// print star patern triangle
#include <stdio.h>
void traingle(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);
    traingle(n);
}