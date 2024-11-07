#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter row and column value:\n");
    scanf("%d %d",&r,&c);
    int arr[r][c];

    printf("Enter the 2d array elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Printing 2d array elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int transpose[c][r];
    printf("Transposing 2d array elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("Printing transposed 2d array elements:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}