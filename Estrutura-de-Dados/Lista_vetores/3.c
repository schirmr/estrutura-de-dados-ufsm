#include <stdio.h>

int main(){
  int vet[] = {3, 5, 7 ,9, 11};
  int tam = sizeof(vet)/sizeof(vet[0]);
  int vet2[tam];
  int j;
  for(int i = 0, j = 1;i<tam; i++){
    vet2[i] = vet[i];
    while(vet[i] > j){
      vet2[i] = vet2[i] + j;
      j++;
    }
    j = 1;
  }
  for(int i = 0; i<tam;i++)printf("%d ", vet2[i]);
  return 0;
}