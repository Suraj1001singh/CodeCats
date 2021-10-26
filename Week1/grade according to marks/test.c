#include <stdio.h>
#define TOTALMARKS 100

float getpercent(float marks)
{
    float a = (marks / TOTALMARKS) * 100;
    return a;
}
char getGrades(float percent)
{

    if (percent >= 90)
        return 'A';
    else if (percent > 80)
        return 'B';
    else if (percent >= 70)
        return 'C';
    else if (percent >= 60)
        return 'D';
    else if (percent >= 40)
        return 'E';
    else
        return 'F';
}
int main()
{
    float a, b, c, d, e;

    printf("Enter Physics, Bio ,Chem, Math, computer marks :");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("Grades are :\n %c %c %c %c %c", getGrades(getpercent(a)), getGrades(getpercent(b)), getGrades(getpercent(c)), getGrades(getpercent(d)), getGrades(getpercent(e)));

    return 0;
}