#include <stdio.h>
#include <string.h>

int main(){
  int vet1[] = {-5,2,8,14,15};
  int vet2[] = {-2,5,8,18,20};
  int vet3[] = {-10,8,17,5,23};
  int i = 0;
  int tam = strlen(vet1);
  int mat[tam][tam];
  int j,k;
  /* Criação da matriz com a soma de linha vet1[] + linha vet2[]*/
  for(i = 0, j = tam-1, k = 0; i < tam && j >= 0; i++){
    while(k < tam){
      mat[i][k] = vet1[k] + vet2[j];
      k++;
    }
    k = 0;
    j--;
  }

  for (i = 0, k = 0; k < tam; i++) {
    for (j = 0; j < tam; j++) {
      printf("%d + %d = %d\n", mat[i][j], vet3[k], mat[i][j]+vet3[k]);
      if (vet3[j] + mat[i][j] == 0)printf("%d %d\n", i, j);
    }
    if (i+1 == tam) {
      k++;
      i = -1;
    }
  }

  printf("----- MATRIZ -----\n");
  for(i = 0; i < tam; i++){
    for(j = 0; j < tam; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  printf("Numeros que tem nos 3 vetores e que a soma da 0:\n");
  for (i = 0, k = 0; k < tam; i++) {
    for (j = 0; j < tam; j++) {
      if (vet3[k] + mat[i][j] == 0)printf("%d %d %d\n", vet1[j], vet2[i],vet3[k]);
    }
    if (i+1 == tam) {
      k++;
      i = -1;
    }
  }
  return 0;
}