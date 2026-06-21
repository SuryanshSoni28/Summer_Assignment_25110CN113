#include<stdio.h>
int main()
{
    int r,c;
    printf("enter the number of rows and columns: \n");
    scanf("%d %d",&r ,&c);

    int arr[r][c];
    printf("enter the elements of the matrix: \n");

    for(int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<r; i++)
    {
        int sum=0;
        
        for(int j=0; j<c; j++)
        {
            sum+=arr[i][j];
        }
    
    printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}