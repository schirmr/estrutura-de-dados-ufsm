#include <stdio.h>

void funcSaltos(int vet[], int tam, int pos){
  int vetCop[tam];
  for (int i = 0; i < tam; i++) {
    vetCop[i] = vet[i];
  }
  for(int i = 0; i < tam; i++){
    if (i<pos) {
      vet[i] = vetCop[tam+i-pos];
    }
    else vet[i] = vetCop[i-pos];
  }
}

int main(){
  int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < 10; i++){
    printf("%d ", vet[i]);
  }
  printf("\n");
  funcSaltos(vet, sizeof(vet)/sizeof(vet[0]),5);
  for (int i = 0; i < 10; i++){
    printf("%d ", vet[i]);
  }
  return 0;
}