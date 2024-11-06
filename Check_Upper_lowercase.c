#include<stdio.h>

int main()
{
    char c;
    printf("Enter character to check upper or lower case:\n");
    scanf("%c",&c);

    if(c >= 65 && c <= 90)
    {
        printf("Entered character %c is Uppercase",c);
    }
    else if(c >=97 && c<=122)
    {
        printf("Entered charcter %c is lowercase",c);
    }
    else
    {
        printf("Invalid character!,Please enter valid charcater");
    }

    return 0;
}