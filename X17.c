#include <stdio.h>

int main()
{
   int lato1;
   int lato2;
   int lato3;
   int perimetro;
   int A1;
   int radicequadrata;
   int tempo;
   int area;
   printf("Dimmi la lunghezza del primo lato\n");
   scanf("%d", &lato1);
   printf("Dimmi la lunghezza del secondo lato\n");
   scanf("%d", &lato2);
   printf("Dimmi la lunghezza del terzo lato\n");
   scanf("%d", &lato3);

   perimetro= lato1 + lato2 + lato3;
   printf("Il perimetro del triangolo è: %d\n", perimetro);
   
   area= perimetro/2 * (perimetro/2 - lato1) * (perimetro/2 - lato2) * (perimetro/2 - lato3);
   radicequadrata= area/2;
   tempo= 0;
   while(radicequadrata != tempo)
   {
      tempo= radicequadrata;
      radicequadrata= (area/tempo + tempo) /2;
      
   }
   printf("L'area del triangolo è: %d\n", area);
   return(0);
}




