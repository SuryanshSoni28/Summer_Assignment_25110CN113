#include<stdio.h>
int main()
{
    int r,c;
    printf("emnter the number of rows and columns: ");
    scanf("%d %d", &r,&c);

    int arr[r][c];
    printf("enter the elements of the array: ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("the transpose of matrix is: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
           printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}