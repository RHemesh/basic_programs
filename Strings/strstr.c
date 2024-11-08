#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    char substr[10];

    printf("Enter string and substring:\n");
    scanf("%[^\n] %[^\n]",str,substr);

    char *res = strstr(str,substr);

    if(res!=NULL)
    {
        printf("Substring %s found at the start position %ld",substr,res - str);
    }
    else{
        printf("Substring %s not found in the main string %s",substr,str);
    }

    return 0;

}