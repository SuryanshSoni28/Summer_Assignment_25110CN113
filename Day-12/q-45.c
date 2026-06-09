#include <stdio.h>
int palindrome(int n)
{
    int rem, rev = 0, temp;

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (n = rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    palindrome(n);

    if (palindrome(n))
        printf("the given number is a palindrome");
    else
        printf("the given number is not a palindrome.");

    return 0;
}