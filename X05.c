#include <stdio.h>

int main()
{
    int celsius;
    int fahreneit;
    int kelvin;
    printf("Inserisci una temperatura in Celsius \n");
    scanf("%d", &celsius);
    if(celsius <= -273.15)
    {
        printf("errore \n");
    }
    else
    {
        fahreneit= 1.8*celsius + 32;
        kelvin= celsius + 273.15;
        printf("%d fahreneit \n", fahreneit);
        printf("%d kelvin \n", kelvin);
    }
    return(0);
}   
