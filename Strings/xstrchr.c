#include<stdio.h>


char *xstrchr(const char *s,char ch)
{
    while(*s != '\0')
    {
        if(*s == ch)
        {
            return (char *)s;
        }
        s++;
    }
    return NULL;
}
int main()
{
    char str[10];
    printf("Enter string:\n");
    scanf("%[^\n]",str);
    getchar();
    char ch;
    printf("Enter the character to find the irst occurance of that ch:\n");
    scanf("%c",&ch);

    char *res = xstrchr(str,ch);

    if(res !=NULL)
    {
        printf("charcter:%c found at position:%ld",ch,(res - str)+1);
    }
    else
    {
        printf("cahracter not found in the string");
    }



}