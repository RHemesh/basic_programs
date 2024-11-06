#include<stdio.h>

int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d",&num);
    int pos;
    printf("Enter bit position to check whether it is set/reset:\n");
    scanf("%d",&pos);

    if(num&(1<<pos))
    {
        printf("Entered bit position %d is set",pos);
    }
    else{
        printf("Entered bit position %d is not set(ie. reset)",pos);
    }

    return 0;
}