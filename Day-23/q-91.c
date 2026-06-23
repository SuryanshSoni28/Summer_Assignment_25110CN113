#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};

    printf("enter string 1: \n");
    scanf("%s", str1);

    printf("enter string 2: \n");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("the strings are not anagram.\n");
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("the strings are not anagram.\n");
            return 0;
        }
    }

    printf("strings are anagram.");

    return 0;
}