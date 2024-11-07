#include<stdio.h>

int xstrlen(char *str)
{
    int length = 0;
    while(*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}
int main()
{
    char str1[] = "Let us C";
    char *str2 = "C programming";

    int len1 = xstrlen(str1);
    int len2 = xstrlen(str2);

    printf("strlen of str1  = %d and str2 = %d",len1,len2);

    return 0;

}