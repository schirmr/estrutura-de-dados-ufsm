#include <stdio.h>
#include <stdlib.h>

void exemplo(int **ptr) {
  printf("-----------------\n");
  printf("Ponteiro: %p\n", *ptr);
  printf("Endereco: %p\n", &ptr[0]);
}

int main(){
  int tam = 5;
  int *vet = malloc(tam*sizeof(int));
  printf("Ponteiro: %p\n", *vet);
  printf("Endereco: %p\n", &vet[0]);
  exemplo(vet);
  free(vet);
  return 0;
}