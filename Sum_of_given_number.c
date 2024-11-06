#include<stdio.h>

int main()
{
    int num;
    printf("Enter number :\n");
    scanf("%d",&num);
    int rem,sum = 0;
    while(num!=0)
    {
        rem = num%10;
        sum = sum +rem;
        num = num/10;
    }

    printf("Sum of digits in a number = %d",sum);

    return 0;

}