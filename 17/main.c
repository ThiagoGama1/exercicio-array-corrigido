#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula;
    float minutos[2];
    int i = 0;
    float media;
    int soma = 0;
    int atletas = 0;
    for(i = 0; i < 2; i++){
    printf("Qual e sua matricula?\n");
    scanf("%i", &matricula);
    printf("Qual foi seu tempo de corrida(em minutos)?\n");
    scanf("%f", &minutos[i]);
    soma += minutos[i];
    atletas++;
    }
    media = soma / atletas;
    printf("A media de tempo dos atletas foi de: %.2f\n", media);
    return 0;
}
