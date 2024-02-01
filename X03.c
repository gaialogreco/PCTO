#include <stdio.h>

int main()
{
    printf("a quanti anni puoi prendere la patente in Italia? \n");
    int n;
    scanf("%d", &n);
    printf("inserisci la tua età \n");
    int n2;
    scanf("%d", &n2);
    if(n2>=18)
    {
       printf("puoi prendere la patente in Italia \n");
    }
    else
    {
        printf("non puoi prendere la patente in Italia \n");
    }
    return(0);

}