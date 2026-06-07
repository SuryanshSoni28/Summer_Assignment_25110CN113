#include <stdio.h>
int main()
{
    int i, j, n;

    printf("enter the number of rows:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++) // spaces
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // starting(ascending) alphabet
        {
            printf("%c", 'A' + j - 1);
        }
        for (j = i - 1; j >= 1; j--) // ending(descending) alphabet.
        {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}