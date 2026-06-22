#include <stdio.h>
int main()
{
    char str[100];
    int frequency[256] = {0};

    printf("enter the string: \n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        frequency[str[i]]++;
    }

    printf("character frequiencies are as follows: \n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (frequency[str[i]] != 0)
        {
            printf("%c = %d\n", str[i], frequency[str[i]]);
            frequency[str[i]] = 0;
        }
    }
    return 0;
}