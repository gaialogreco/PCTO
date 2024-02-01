#include <stdio.h>

int main()
{
    printf("quanti anni hai? \n");
    int n;
    scanf("%d", &n);
    if(n<18)
    {
    printf("sei minorenne \n");
    }
    else
    {
    printf("sei maggiorenne \n");
    }
    return(0);
}

