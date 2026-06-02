#include <stdio.h>
int main()
{
    int num, i, temp;

    printf("enter the number:");
    scanf("%d", &num);

    temp = num;

    printf("the factors of number %d is:\n", num);

    for (i = 2; i <= temp; i++)
    {
        while (temp % i == 0)
        {
            printf("%d\n", i);
            temp = temp / i;
        }
    }
    return 0;
}