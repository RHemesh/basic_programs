#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter r and c values:\n");
    scanf("%d %d",&r,&c);

    int arr[r][c];
    printf("Enter array elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }

    if(count > (r*c)/2)
    {
        printf("Entered matrix is sparse matrix");
    }
    else
    {
        printf("It is not an sparse matrix");
    }

    return 0;
}