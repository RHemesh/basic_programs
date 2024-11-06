#include<stdio.h>

int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    int count = 0;
    while(num!=0)
    {
        num = num/10;
        count++;
    }

    printf("Total  number of digits in num = %d",count);

    return 0;
}