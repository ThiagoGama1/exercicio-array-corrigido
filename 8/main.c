#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define MAXIMO 99
#define MINIMO 10
#define INTERVALO (MAXIMO - MINIMO + 1)
void bubble(int aleatorio[], int tamanho, int resposta);
int main() {
  srand(time(NULL));
  int aleatorio[SIZE];
  int i;
  int resposta;

  printf("Você quer crescente (1) ou decrescente (0)?\n");
  scanf("%i", &resposta);

  for (i = 0; i < SIZE; i++) {

    aleatorio[i] = rand() % INTERVALO + MINIMO;
  }
  bubble(aleatorio, SIZE, resposta);
  for (i = 0; i < SIZE; i++) {
    printf("Posicao %i: %i\n", i, aleatorio[i]);
  }

  return 0;
}
void bubble(int aleatorio[], int tamanho, int resposta) {
  for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < i; j++) {
      if (resposta == 1 && aleatorio[i] < aleatorio[j]) {
        int troca = aleatorio[i];
        aleatorio[i] = aleatorio[j];
        aleatorio[j] = troca;
      }
      else if(resposta == 0 && aleatorio[i] > aleatorio[j])
      {
        int troca = aleatorio[i];
        aleatorio[i] = aleatorio[j];
        aleatorio[j] = troca;
      }
    }
  }
}
