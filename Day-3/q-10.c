#include <stdio.h>
int main()
{
    int first, last, i, j, count;
    printf("enter the first number of the range:");
    scanf("%d", &first);
    printf("enter the last value of the range:");
    scanf("%d", &last);

    printf("Prime numbers between %d and %d are:\n", first, last);
    for (i = first; i <= last; i++)
    {
        if (i <= 1)
        {
            continue;
        }
        count = 0;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}