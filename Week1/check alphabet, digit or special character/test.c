#include <stdio.h>
int main()
{
    char c;
    printf("Enter character:\n");
    c = getchar();
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        printf("It is an Alphabet");
    else if (c >= '0' && c <= '9')
        printf("It is digit");
    else
        printf("It is special character");
    return 0;
}