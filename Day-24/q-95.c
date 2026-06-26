#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    printf("enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\n')
        {
            currLen++;
        }
        else
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxStart = start;
            }

            currLen = 0;
            start = i + 1;
        }
    }

    printf("longest word: ");
    for(int i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%c", str[i]);
    }

    printf("length: %d", maxLen);

    return 0;
}