#include <stdio.h>

int main()
{
    int n1;
    n1= 1969;
    int n2;
    printf("Dimmi il tuo anno di nascita \n");
    scanf("%d", &n2);
    if(n1==n2)
    {
        printf("Sei nato/a nello stesso anno in cui l'uomo è andato per la prima volta sulla Luna \n");
    }
    else if(n1<n2)
    {
        printf("Sei nato %d dopo del 1969 \n", n2-n1);
    }
    else
    {
        printf("Sei nato %d prima del 1969 \n", n1-n2);
    }
    return(0);
}