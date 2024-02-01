#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("inserisci un anno \n");
    scanf("%d", &n1);
    if((n1%4==0 && n1%100!=0) || n1%400==0)
    {
        printf("L'anno è bisestile \n");
    }
    else
    {
        printf("L'anno non è bisestile \n");
    }
    return(0);
}