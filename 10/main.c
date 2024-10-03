#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MINIMO 10
#define MAXIMO 99
#define INTERVALO (MAXIMO - MINIMO + 1)
int main()
{
    int aleatorio[SIZE], i;
    srand(time(NULL));
    int contadorpar = 0, contadorimp = 0, somapar = 0, somaimp = 0;



    for(i = 0; i < SIZE; i++)
    {
        aleatorio[i] = rand() %  INTERVALO + MINIMO;
        printf("Posicao %i: %i\n", i, aleatorio[i]);
        if(aleatorio[i] % 2 == 0)
        {
            somapar += aleatorio[i];
            contadorpar++;
        }
        else
        {
            somaimp += aleatorio[i];
            contadorimp++;
        }

    }
    printf("A media dos termos pares e: %.2f\n", (float)somapar / contadorpar);
    printf("A media dos termos impares e: %.2f\n", (float)somaimp / contadorimp);
    return 0;
}
