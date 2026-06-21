#include<stdio.h>
int main()
{
    char str[50];
    int length=0;
    
    printf("enter the strng: \n");
    scanf("%s", str);

    while(str[length]!='\0')
    {
        length++;
}

    printf("reversed string is\n");
    for(int i=length; i>=0; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}