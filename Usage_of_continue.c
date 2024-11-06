#include<stdio.h>

int main()
{
    int i = 20;
    while(i--)
    {
        if(i == 10)
        {
            continue;
        }
        printf("%d ",i);
    }

    return 0;
}