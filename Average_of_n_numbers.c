#include<stdio.h>

int main()
{
    int n;
    printf("enter n value:\n");
    scanf("%d",&n);
    int arr[n],sum = 0;
    printf("Enter n number of values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    
    int avg = sum/n;
    
    printf("average of %d numbers = %d",n,avg);
    
    return 0;
}