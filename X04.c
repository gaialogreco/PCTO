#include <stdio.h>

int main()

{
    int n1;
    int n2;

    printf("Inserisci il primo numero \n");
    scanf("%d", &n1);
    prinf("Inserisci il secondo numero \n");
    scanf("%d", &n2);
    if(n1 % n2 == 0)
    {
        printf("Il primo numero è multiplo del secondo \n");
    
    }
    else
    {
        printf("Il primo numero non è multiplo del secondo \n");
    }
    return(0);
}
