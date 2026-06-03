#include <stdio.h>
int countbit(int n)
{
    int bit, count=0;

    while(n)
    {
        bit= n&1;
        if(bit)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main()
{
    int num;

    printf("enter the number:");
    scanf("%d", &num);

    printf("the number of set bits are: %d", countbit(num));

    return 0;
}