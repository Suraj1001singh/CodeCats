// Program to check Palindrome Program using Pointer
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str = (char *)malloc(sizeof(char) * 100);
    printf("Enter string : ");
    scanf("%s", str);
    int n = strlen(str);
    char *ptr1 = str;
    char *ptr2 = str + n - 1;
    int flag = 0;
    while (ptr1 < ptr2)
    {
        if (*ptr1 != *ptr2)
        {
            flag = 1;
            break;
        }
        ptr1++;
        ptr2--;
    }
    if (flag)
        printf("Not a palindrome !");
    else
        printf(" Palindrome !");
    return 0;
}