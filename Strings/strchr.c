#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    printf("Enter string:\n");
    scanf("%[^\n]",str);
    __fpurge(stdin);
    char ch;
    printf("Enter the character to find the irst occurance of that ch:\n");
    scanf("%c",&ch);

    char *res = strchr(str,ch);

   if(res !=NULL)
   {
       printf("charcter:%c found at position:%ld",ch,(res - str)+1);
   }
   else
   {
       printf("cahracter not found in the string");
   }

    return 0;

}