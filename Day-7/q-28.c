#include<stdio.h>
int reverse=0;

int reverse_num(int n)
{
    if(n==0)
    {
        return reverse;
    }
    else
    {
        reverse = reverse * 10 + (n % 10);
       return reverse_num(n / 10);
    }

}

int main()
{
    int num;

    printf("enter the number:");
    scanf("%d", &num);

    printf("the reverse number is: %d", reverse_num(num));

    return 0;
}