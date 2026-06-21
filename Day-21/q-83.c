#include <stdio.h>
int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("enter the string: \n");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("number of vowels = %d\n", vowels);
    printf("number of consonants = %d\n", consonants);

    return 0;
}