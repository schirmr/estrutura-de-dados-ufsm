#include <stdio.h>

// otimização do codigo da aula3.c

void funcSaltos(int vet[], int tam, int pos){
  int j = tam - 1;
  int aux;
  for(int i = 0; i < tam; i++, j--){
      aux = vet[i];
      vet[i] = vet[j];
      vet[j] = aux;
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