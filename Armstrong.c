#include<stdio.h>

int main()
{
    int num;
    int r,res = 0;
    printf("Enter number to find armstrong or not:\n");
    scanf("%d",&num);
    int temp = num;
    while(num!=0)
    {
        r = num%10;
        res = res + (r * r * r);
        num = num/10;
    }

    if(res == temp)
    {
        printf("Number %d is armstrong",temp);
    }
    else{
        printf("Number %d is not an armstrong",temp);
    }

    return 0;
}
