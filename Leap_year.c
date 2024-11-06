#include<stdio.h>

int main()
{
    int year;
    printf("Enter year to check leap year:\n");
    scanf("%d",&year);

    if((year % 4 ==0 && year % 100!=0) ||(year %400 == 0))
    {
        printf("Year %d is a leap year",year);
    }
    else{
        printf("year %d is not a leap year",year);
    }

    return 0;
}