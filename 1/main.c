#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define MAXIMO 99
#define MINIMO 10
#define INTERVALO (MAXIMO - MINIMO + 1)
int main()
{
    srand(time(NULL));
    int aleatorio[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {

        aleatorio[i] = rand() % INTERVALO + MINIMO;


        if(aleatorio[i] % 2 != 0 && aleatorio[i] % 7 == 0)
        {
            printf("Numero %i: %i\n", i, aleatorio[i]);
        }

    }

    return 0;
}
