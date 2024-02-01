#include <stdio.h>

void verifica(int numero)
{
    printf("Inserisci un numero \n");
    scanf("%d", &numero);
    if(numero%2==0)
    {
        printf("Il numero è pari \n");
    }
    else 
    {
        printf("Il numero è dispari\n");
    }
}

int main()
{
    int x;
    printf("Inserisci un numero \n");
    scanf("%d", &x);
    verifica(x);

return(0);
}