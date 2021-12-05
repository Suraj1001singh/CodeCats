#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    gets(str2);

    int a[26] = {0};
    int b[26] = {0};
    char *ptr1 = str1;
    while (*ptr1 != '\0')
    {
        a[*ptr1 - 'a']++;
        ptr1++;
    }
    char *ptr2 = str2;
    while (*ptr2 != '\0')
    {
        b[*ptr2 - 'a']++;
        ptr2++;
    }

    for (int i = 0; i < 26; i++)
    {

        if (b[i] - a[i] != 0)
        {
            printf("%c", 'a' + i);
            break;
        }
    }

    return 0;
}