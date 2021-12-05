// Longest Subsequence where every character appears at least k-times
#include <stdio.h>
#include <string.h>
int main()
{
    int a[26] = {0};
    char str[100];
    gets(str);
    int k;
    scanf("%d", &k);
    char *ptr = str;
    while (*ptr != '\0')
    {
        a[*ptr - 'a']++;
        ptr++;
    }
    ptr = str;
    while (*ptr != '\0')
    {

        if (a[*ptr - 'a'] >= k)
            printf("%c", *ptr);
        ptr++;
    }

    return 0;
}