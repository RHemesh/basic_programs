#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];

    printf("Enter string:\n");
    scanf("%[^\n]",str);
    char des[20];
    strcpy(des,str);

    printf("After copying des = %s",des);

    return 0;
    
}
