#include<stdio.h>

int main()
{
    int r1,r2,c1,c2;

    printf("Enter r1 and c1 values:\n");
    scanf("%d %d",&r1,&c1);

    printf("Enter r2 and c2 values:\n");
    scanf("%d %d",&r2,&c2);

    int arr1[r1][c1];
    int arr2[r2][c2];

    if(c1!=r2)
    {
        printf("matrix multiplication is not possible\n");
        return 1;
    }

    printf("Enter array1 elements:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter array2 elements:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    int res[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {   res[i][j] = 0;
            for(int k=0;k<c1;k++)
            {
                res[i][j] +=arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Product of two matrices:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}