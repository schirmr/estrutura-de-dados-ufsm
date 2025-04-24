#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int quantMaiorQueCinco(int v[], int tam) {
  int quant = 0;
  for(int i = 0; i < tam; i++) {
    if (v[i] > 5)++quant;
  }
  printf("\nQuantidade de numeros maiores que 5 no vetor: %d", quant);
  return 0;
}

int main(){
  int vet[15];
  srand(time(NULL));
  for(int i = 0; i < 15; i++) vet[i] = rand() % (16);
  for(int i = 0; i < 15; i++) printf("%d ", vet[i]);
  quantMaiorQueCinco(vet, 15);
  return 0;
}