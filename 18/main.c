#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula[25000];
    float minutos[25000];
    int i = 0;
    float media;
    float soma = 0;
    int atletas = 0;
    for(i = 0; i < 25000; i++){
    printf("Qual e sua matricula?\n");
    scanf("%i", &matricula[i]);
    printf("Qual foi seu tempo de corrida(em minutos)?\n");
    scanf("%f", &minutos[i]);
    soma += minutos[i];
    atletas++;
    }
    media = soma / atletas;
    for(i = 0; i < 25000; i++)
    {
        if(minutos[i] < media)
    {
        printf("%i\n", matricula[i]);
    }
    }

    return 0;
}
