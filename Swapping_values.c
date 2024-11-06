#include<stdio.h>

int main()
{
    int a,b;
    printf("enter a and b values:\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping a = %d and b = %d\n",a,b);
    /*
    //Using third variable
    int temp = a;
    a = b;
    b = temp;
    */



    //without using third variable --Method1
    a = a^b;
    b = a^b;
    a = a^b;


    /*
    //without using third variable --Method2
    a = a+b;
    b = a-b;
    a = a-b;
    */


    /*
    //without using third variable --Method3
    a = a*b;
    b = a/b;
    a = a/b;
    */


    printf("After swapping a = %d and b = %d",a,b);

    return 0;
}