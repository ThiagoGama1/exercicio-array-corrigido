#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula[3];
    float minutos[3];
    int i;
    int j, troca;
    float soma = 0;
    int atletas = 3;
    float armazenar = 0;
    int tempMatri;
    float diferenca;

    for(i = 0; i < atletas; i++){
        printf("Qual é sua matricula?\n");
        scanf("%i", &matricula[i]);
        printf("Qual foi seu tempo de corrida (em minutos)?\n");
        scanf("%f", &minutos[i]);
        soma += minutos[i];
    }

    for(i = 0; i < atletas - 1; i++)
    {
        troca = 0;
        for(j = i + 1; j < atletas; j++)
        {
            if(minutos[i] > minutos[j])
            {
                armazenar = minutos[i];
                minutos[i] = minutos[j];
                minutos[j] = armazenar;
                tempMatri = matricula[i];
                matricula[i] = matricula[j];
                matricula[j] = tempMatri;
                troca = 1;
            }
        }
        if(troca != 1)
        {
            break;
        }
    }
    diferenca = minutos[atletas - 1] - minutos[0];
    printf("A matricula do primeiro colocado é: %i\n", matricula[0]);
    printf("A matricula do ultimo colocado é: %i\n", matricula[atletas - 1]);
    printf("A diferença de tempo entre eles foi de: %.1f\n", diferenca);

    return 0;
}
