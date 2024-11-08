#include<stdio.h>
#include<string.h>

void xstrcat(char *str1,const char *str2)
{
    int i = 0;
    while(*str1 != '\0')
    {
        str1++;
    }

    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}


int main()
{
    char str1[20];
    char str2[10];

    printf("Enter the strings str1 and str2:\n");
    scanf("%[^\n] %[^\n]",str1,str2);

    xstrcat(str1,str2);

    printf("Agter concating string  = %s",str1);

    return 0;
    
}