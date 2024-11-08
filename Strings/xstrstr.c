#include<stdio.h>

char *xstrstr(const char* str,const char* substr)
{
    int j;
    int found = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        for(j=0;substr[j]!='\0';j++)
        {
            if(str[i+j]!=substr[j])
            {
                break;
            }
        }

        if(substr[j] == '\0')
        {
            return (char *)(str + i);
        }
    }

    return NULL;
}
int main()
{
     char str[20];
    char substr[10];

    printf("Enter string and substring:\n");
    scanf("%[^\n] %[^\n]",str,substr);

    char *res = xstrstr(str,substr);

    if(res!=NULL)
    {
        printf("Substring %s found at the start position %ld",substr,res - str);
    }
    else{
        printf("Substring %s not found in the main string %s",substr,str);
    }

    return 0;

}