#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos = 30;
    float bi1[alunos], bi2[alunos], media[alunos];
    int sexo[alunos];
    int i, j;
    float armazenar;
    int armazenasexo;

    for (i = 0; i < alunos; i++)
    {
        printf("Insira sua nota no primeiro bimestre:\n");
        scanf("%f", &bi1[i]);
        printf("Insira sua nota no segundo bimestre:\n");
        scanf("%f", &bi2[i]);
        printf("Qual o seu sexo? (Digite 1 para masculino ou 2 para feminino)\n");
        scanf("%i", &sexo[i]);

        while (sexo[i] != 2 && sexo[i] != 1)
        {
            printf("Sexo invalido, digite novamente: (Digite 1 para masculino ou 2 para feminino)\n");
            scanf("%i", &sexo[i]);
        }

        media[i] = (bi1[i] + bi2[i]) / 2;
    }

    for (i = 0; i < alunos - 1; i++)
    {
        for (j = i + 1; j < alunos; j++)
        {
            if (media[i] < media[j])
            {
                armazenar = media[i];
                media[i] = media[j];
                media[j] = armazenar;

                armazenasexo = sexo[i];
                sexo[i] = sexo[j];
                sexo[j] = armazenasexo;
            }
        }
    }

    printf("Os dados dos 10 alunos com as maiores medias:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Aluno %i:\nMedia: %.2f\nSexo: %i\n", i + 1, media[i], sexo[i]);
    }

    return 0;
}
