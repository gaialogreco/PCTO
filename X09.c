#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("Inserisci tre numeri \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1==n2 && n2==n3 && n1==n3)
    {
        printf("Il triangolo è equilatero \n");
    }
    else if(n1==n2 && n1!=n3 && n2!=n3)
    {
        printf("Il trangolo è isoscele \n");
    }
    else
    {
        printf("Il triangolo è scaleno \n");
    }
    return(0);
}