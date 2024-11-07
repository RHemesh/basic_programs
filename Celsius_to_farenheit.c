#include<stdio.h>

int main()
{
    float cel,faren;
    printf("Enter celsius to conver it to farenheit:\n");
    scanf("%f",&cel);

    faren = (cel * 1.8) + 32;

    printf("%.2f c after converting to fareneit  = %.2f f",cel,faren);

    return 0;
}