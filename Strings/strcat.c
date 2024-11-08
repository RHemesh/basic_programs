#include<stdio.h>
#include<string.h>

int main()
{
    char str1[10] = "Hemesh";
    char *str2  = " R";

    strcat(str1,str2);

    printf("After concatinating two strings str1 = %s",str1);

    return 0;

}