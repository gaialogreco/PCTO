#include <stdio.h>

int main()
{
    int x=0;
    int y;

    while(x<101)
    {
        x=x+1;
        y=x+y;
    }
    printf("%d\n", y);
    return(0);
}
