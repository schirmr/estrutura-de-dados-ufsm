#include <stdio.h>

/* função que recebe dois vetores (usando ponteiros explicitamente), com qualquer numero de elementos cada
* imprimir os valores que estão presentes nos dois vetores */

void imprimirIguais(int *v1, int *v2, int tam1, int tam2){
  
}

int main(){
  int v1[] = {19, 5, 2, 6};
  int v2[] = {5, 0, 9, 4, 18, 6, 40};
  int tam1 = sizeof(v1)/sizeof(v1[0]);
  int tam2 = sizeof(v2)/sizeof(v2[0]);
  imprimirIguais(v1, v2, tam1, tam2);
  return 0;
}