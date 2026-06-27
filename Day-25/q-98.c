#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("enter string 1: \n");
    scanf("%s", str1);

    printf("enter string 2: \n");
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]] = 1;
    }

    printf("common character are: ");
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (freq[(unsigned char)str2[i]] == 1)
        {
            printf("%c ", str2[i]);
            freq[(unsigned char)str2[i]] = 0;
        }
    }

    return 0;
}