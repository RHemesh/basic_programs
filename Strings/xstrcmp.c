#include<stdio.h>
#include<string.h>

int xstrcmp(const char str1[],const char str2[])
{
    int i=0;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }

    return 0;
}
int main()
{
    char str1[15];
    char str2[20];
    printf("Enter str1 and str2:\n");
    scanf("%[^\n] %[^\n]",str1,str2);
    int res;
    res = xstrcmp(str1,str2);

    if(res == 0)
    {
        printf("Both the string are equal");
    }
    else
    {
        printf("Both the strings are not equal");
    }

    return 0;

}