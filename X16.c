#include <stdio.h>

int main()
{
    int n;
    int x=2;

    printf("Scegli un numero\n");
    scanf("%d", &n);
    while(x<=n)
    {
        if(n%x==0)
        {
            break;
        }
        x=x+1;

    }
    if(x==n)
    {
    printf("Il numero è primo\n");
    }
    else
    {
        printf("Il numero non è primo\n");
    }
    return(0);
}