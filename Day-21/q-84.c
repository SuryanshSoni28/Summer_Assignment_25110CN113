#include <stdio.h>
int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("enter the string: \n");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("uppercase string is: %s\n", str);

    return 0;
}