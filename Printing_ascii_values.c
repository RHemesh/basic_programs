#include<stdio.h>

int main()
{
    printf("Ascii values of Uppercase letters:\n");
    for(int i=65;i<=90;i++)
    {
        printf("Ascii value of %c  = %d\n",i,i);
    }
    
    printf("\n\nAscii values of lowercase letters:\n");
    for(int i=97;i<=122;i++)
    {
        printf("Ascii value of %c  = %d\n",i,i);
    }

    return 0;
}