#include<stdio.h>

int main()
{
    int num;
    printf("Enter number to check prime:\n");
    scanf("%d",&num);
    int count = 0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("Given number %d is prime",num);
    }
    else{
        printf("Number %d is not prime",num);
    }

    return 0;
}