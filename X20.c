#include <stdio.h>

void massimo(int x, int y)
{

    if(x>y)
    {
        printf("%d è il massimo tra i due numeri \n", x);
    }
    else if(x<y)
    {
        printf("%d è il massimo tra i due numeri \n", y);
    }
    else if(x=y)
    {
        printf("I due numeri sono uguali \n");
    }
}

int main()

{
    int numero1;
    int numero2;
    printf("Inserisci due numeri \n");
    scanf("%d %d", &numero1, &numero2);
    massimo(numero1, numero2);
}




