#include<stdio.h>

int main()
{
    int n;
    printf("Enter total number of elements:\n");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the array elements for arr1:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Copying elements from arr1 to arr2\n");
    for(int i=0;i<n;i++)
    {
        arr2[i] = arr1[i];
    }

    printf("After copying elements \n arr2  = ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }

    return 0;

}