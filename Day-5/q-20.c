#include <stdio.h>
int main()
{
    int num, i, temp, largest = 0;

    printf("enter the number:");
    scanf("%d", &num);

    temp = num;

    for (i = 2; i <= temp; i++)
    {
        while (temp % i == 0)
        {
            largest = i;
            temp = temp / i;
        }
    }
    printf("the largest prime factor of %d is %d is:\n", num, largest);

    return 0;
}