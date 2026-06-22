#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, flag = 1;
    printf("enter the string: \n");
    scanf("%s", &str);

    length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("the string is pallindrome.\n");
    else
        printf("the string is not pallindrome.");

    return 0;
}