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
    
    int sum = 0;
    //Finding minor diagonal elements and adding all of them
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i+j == r-1)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    
    printf("sum of major elements in an matrix  = %d",sum);

    return 0;
}