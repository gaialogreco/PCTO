#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("Inserisci tre numeri \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int n4;
    n4= n1 + n2;
    int n5;
    n5= n2 + n3;
    int n6;
    n6= n1 + n3;
    if(n4>n3 && n5>n1 && n6>n2)
    {
        printf("I tre numeri possono essere i lati un triangolo \n");
    }
    else
    {
        printf("I tre numeri non possono essere lati di un triangolo \n");
    }
    return(0);
}