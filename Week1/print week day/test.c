#include <stdio.h>
int main()
{
    int day;
    const char *week[7] = {"Mon", "Tue", "Wed", "Thurs", "Fri", "Sat", "Sun"};
    printf("Enter day number :");
    scanf("%d", &day);
    if ((day < 1) || (day > 7))
    {
        printf("enter number between 0-7");
        return 0;
    }
    day -= 1;
    printf("%s", *(week + day));
    return 0;
}