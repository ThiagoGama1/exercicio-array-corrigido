#include <stdio.h>
#include <stdlib.h>
int main()
{
    int alunos = 30;
    float bi1[alunos], bi2[alunos], media[alunos];
    int sexo[alunos];
    int i;
    int media7 = 0;
    for (i = 0; i < alunos; i++)
    {
        printf("Insira sua nota no primeiro bimestre:\n");
        scanf("%f", &bi1[i]);
        printf("Insira sua nota no segundo bimestre:\n");
        scanf("%f", &bi2[i]);
        printf("Qual o seu sexo? (Digite 1 para masculino ou 2 para feminino)\n");
        scanf("%i", &sexo[i]);
        while(sexo[i] != 2 && sexo[i] != 1)
        {
            printf("Sexo invalido, digite novamente:(Digite 1 para masculino ou 2 para feminino)\n");
            scanf("%i", &sexo[i]);

        }
        media[i] = (bi1[i] + bi2[i]) / 2;
        if(media[i] > 7)
        {
            media7++;
        }
    }

     printf("A quantidade de alunos acima da media final 7 foi de: %i\n", media7);



    return 0;
}
