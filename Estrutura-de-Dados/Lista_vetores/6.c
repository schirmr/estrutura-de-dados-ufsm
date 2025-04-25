#include <stdio.h>

int main(){
  float vet[10] = {23.50, 22.00, 23.50, 18.90, 18.90, 29.90, 43.90, 20.00, 19.90, 20.00};
  int tam = 0;
  for(int i = 0; i < 10; i++){
    for(int j = i+1; j < 10; j++) if (vet[i] == vet[j] && vet[j] != 0) vet[j] = 0;
  }
  for(int i = 0; i < 10; i++) {
    if (vet[i] != 0) tam++;
  }
  float vetNoDuplicates[tam];
  int j = 0;
  for (int i = 0; i < 10; i++) {
    if (vet[i] != 0) {
      vetNoDuplicates[j] = vet[i];
      j++;
    }
  }
  printf("VETOR SEM NUMEROS DUPLICADOS\n");
  for(int i = 0; i < tam; i++) {
    printf("%.2f ", vetNoDuplicates[i]);
  }
  printf("\n");
  return 0;
}