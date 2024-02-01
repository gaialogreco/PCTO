#include <stdio.h>

int main()
{
    int x=1;
    int y=1;
    int n;
    printf("scegli un numero\n");
    scanf("%d", &n);
    while(x<=n)
    {
        y=x*y;
        x=x+1;
    }
    printf("%d\n", y);
    return(0);
}