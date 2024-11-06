#include<stdio.h>

int main()
{
    int fact = 1;
    int num;
    printf("Enter number to fnd factorial:\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        fact  = fact * i;
    }

    printf("Factorial of %d is %d",num,fact);

    return 0;
}