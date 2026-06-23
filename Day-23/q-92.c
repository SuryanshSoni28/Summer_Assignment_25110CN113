#include <stdio.h>
int main()
{
    char str[100];
    char max_char;
    int count[256] = {0};
    int max = 0;

    printf("enter the string: \n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            max_char = i;
        }
    }

    printf("maximum occuring character is: %c\n", max_char);
    printf("the maximum frequency is: %d", max);

    return 0;
}