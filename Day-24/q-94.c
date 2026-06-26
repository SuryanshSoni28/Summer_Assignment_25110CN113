#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("enter the string: \n");
    scanf("%s", str);

    int n = strlen(str);
    int count = 1;

    printf(" compressed string is: \n");

    for (int i = 0; i < n; i++)
    {
        count = 1;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }
    return 0;
}