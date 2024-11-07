#include<stdio.h>
#include<string.h>


//Here we can also use the parameters as str_cpy(char str1[],char str2[])
void str_cpy(char *str1,char *str2)
{
    int i = 0;
    while(str1[i]!='\0')
    {
        str2[i] = str1[i];
        i++;
    }
}


int main()
{
    char src[10];
    printf("Enter string:\n");
    scanf("%[^\n]",src);
    char des[10];
    str_cpy(src,des);

    printf("After copying des = %s",des);
}