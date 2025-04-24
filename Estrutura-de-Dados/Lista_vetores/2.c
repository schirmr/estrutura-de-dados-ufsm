#include <stdio.h>

int juntarVetores(int vet1[], int vet2[], int tam1, int tam2){
  int vet3[tam1+tam2];
  for (int i = 0; i < tam1+tam2; i++) {
    if (i < tam1) {
      vet3[i] = vet1[i];
    }
    else vet3[i] = vet2[i-tam1];
  }
  for (int i = 0; i < tam1+tam2; i++) {
    printf("%d ", vet3[i]);
  }
  return 0;
}

int main(){
  int vet1[] = {1, 2, 3, 4, 5};
  int vet2[] = {6, 7, 8, 9, 10, 11, 12, 13};
  int tam1 = sizeof(vet1)/sizeof(vet1[0]);
  int tam2 = sizeof(vet2)/sizeof(vet2[0]);
  juntarVetores(vet1, vet2, tam1, tam2);
  return 0;
}