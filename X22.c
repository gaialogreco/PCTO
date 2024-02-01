#include <stdio.h>

int main()
{
    char stringa[100];
    int x;
    printf("Inserisci due parole \n");
    scanf("%s", stringa);

    while(stringa[x] != '\0')
    {
        if(stringa[x]>= 97 && stringa[x]<=122)
        {
            stringa[x]-=32;
            printf("%c", stringa[x]);
        }
        else if(stringa[x]>= 65 && stringa[x]<= 90)
        {
            printf("%c", stringa[x]);
        }
        else if(stringa[x]==32)
        {
            printf("%c", stringa[x]);
        }
        x= x+1;
    }
    printf("\n");
    return(0);

}
