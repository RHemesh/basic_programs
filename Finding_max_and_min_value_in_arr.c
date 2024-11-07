#include<stdio.h>

int main()
{
    int n;
    printf("Enter the array elements:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    printf("max and min values in an array: \n max = %d  \n min = %d",max,min);

    return 0;
}