#include <stdio.h>
#include <math.h>

int main()
{
    int binary, decimal = 0, remainder, power = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, power);
        binary /= 10;
        power++;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}