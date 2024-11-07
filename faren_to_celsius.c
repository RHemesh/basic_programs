#include<stdio.h>

int main()
{
    float f,c;
    printf("Enter faren value to convert to celsius degree:\n");
    scanf("%f",&f);

    c = ((f - 32)*5)/9;

    printf("After conversion cel = %.2f of faren = %.2f",c,f);

    return 0;
}