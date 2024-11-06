#include<stdio.h>

int main()
{
    int num;
    printf("Enter num to check even or odd:\n");
    scanf("%d",&num);
/*
    //Using arithematic operator
    if(num%2 == 0)
    {
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }

*/

    //Without using arithematic operator
    if((num&1) == 0)
    {
        printf("%d is even");
    }
    else
    {
        printf("%d is odd");
    }

    return 0;
}