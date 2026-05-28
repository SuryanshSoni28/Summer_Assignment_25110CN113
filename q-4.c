#include <stdio.h>
int main()
{
    int n, temp, count = 0;
    printf("enter the number:");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    printf("the number of digits in %d is %d", n, count);
    return 0;
}
//If we want to count digits of number upto 18-19 digits we can use long long int.