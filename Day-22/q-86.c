#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int words = 1;

    printf("enter the sentence:\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            words++;
        }
    }

    printf("number of words = %d", words);

    return 0;
}