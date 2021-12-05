#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int count = 0;
    char *str1 = (char *)malloc(sizeof(char));
    gets(str1);
    char *str2 = (char *)malloc(sizeof(char));
    gets(str2);
    int jewels[256] = {0};

    char *ptr = str1;
    while (*ptr != '\0')
    {
        jewels[*ptr] = 1;
        ptr++;
    }
    ptr = str2;
    while (*ptr != '\0')
    {
        if (jewels[*ptr] == 1)
            count++;
        ptr++;
    }
    printf("%d", count);
    return 0;
}