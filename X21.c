#include <stdio.h>

int fattoriale(int x)
{
    int risultato= 1;
    while(x>0)
    {
        risultato= risultato*x;
        x= x-1;
    }
    return(risultato);
}
int main()
{
    int numero1;
    int z;
    printf("Scegli un numero \n");
    scanf("%d", &numero1);
    z= fattoriale(numero1);
    printf("%d \n", z);

    return(0);
    
}
