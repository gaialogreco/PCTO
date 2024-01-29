#include <stdio.h>

int main()

{
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    
    scanf("%d %d %d %d %d" , &numero1, &numero2, &numero3, &numero4, &numero5);
    int risultato = numero1 + numero2 + numero3 + numero4 + numero5;
    printf ("il tuo risultato é: %d \n" , risultato);
    return(0);
}