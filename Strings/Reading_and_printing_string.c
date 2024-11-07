#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    printf("Enter name:\n");
    scanf("%[^\n]",name);

    printf("My name is %s\n",name);
    printf("Total size of the string  = %ld\n",sizeof(name));
    printf("Total length of the name = %ld\n",strlen(name));

    return 0;

}