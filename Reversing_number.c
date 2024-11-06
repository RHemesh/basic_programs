#include<stdio.h>

int main()
{
    int num;
    int rem,rev =0;
    printf("Enter a number to reverse:\n");
    scanf("%d",&num);
    int temp = num;
    while(num!=0)
    {
        rem = num%10;
        rev = rev * 10 + rem;
        num /=10;
    }

    printf("Reversed number = %d\n",rev);

    if(temp == rev)
    {
        printf("Entered number is palindrome");
    }
    else{
        printf("Entered number is not an palindrome");
    }
    
    return 0;
}