#include <stdio.h>

int countNotes(int *amount, int *totalNotes, int note)
{
    int count = 0;
    count = *amount / note;
    *totalNotes += count;
    *amount -= count * note;

    return count;
}
int main()
{
    int amount;
    int totalNotes = 0;

    printf("Enter the amount:");
    scanf("%d", &amount);
    printf("NOtes of 500 : %d\n", countNotes(&amount, &totalNotes, 500));
    printf("NOtes of 100 : %d\n", countNotes(&amount, &totalNotes, 100));
    printf("NOtes of 50 : %d\n", countNotes(&amount, &totalNotes, 50));
    printf("NOtes of 20 : %d\n", countNotes(&amount, &totalNotes, 20));
    printf("NOtes of 10 : %d\n", countNotes(&amount, &totalNotes, 10));
    printf("NOtes of 5 : %d\n", countNotes(&amount, &totalNotes, 5));
    printf("NOtes of 2 : %d\n", countNotes(&amount, &totalNotes, 2));
    printf("NOtes of 1 : %d\n", countNotes(&amount, &totalNotes, 1));
    printf("Total notes require for Amount %d : %d", amount, totalNotes);

    return 0;
}