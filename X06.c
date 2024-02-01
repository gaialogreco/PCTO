#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("Inserisci un numero \n");
    scanf("%d", &n1);
    printf("Inserisci un secondo numero \n");
    scanf("%d", &n2);
    printf("Inserisci un terzo numero \n");
    scanf("%d", &n3);
    if(n2-n1 == n3-n2)
    {
        printf("I tre numeri sono in progressione \n");
    }
    else
    {
        printf("I tre numeri non sono in progressione \n");
    }
    return(0);
}