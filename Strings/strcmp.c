#include<stdio.h>
#include<string.h>


int main()
{
    char str1[10];
    char str2[20];
    printf("Enter str1 and str2:\n");
    scanf("%[^\n] %[^\n]",str1,str2);

    if(strcmp(str1,str2) == 0)
    {
        printf("Both the string are equal");
    }
    else
    {
        printf("Both the strings are not equal");
    }

    return 0;
}