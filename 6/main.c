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
    int tres = 0;

    for(i = 0; i < SIZE; i++)
    {

        aleatorio[i] = rand() % INTERVALO + MINIMO;


        if(aleatorio[i] == 33)
        {
            tres++;

        }

    }
    printf("A quantidade de vezes que apareceu o 33 foi: %i\n", tres);

    return 0;
}

