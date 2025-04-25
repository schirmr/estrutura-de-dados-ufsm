#include <stdio.h>

int main(){
  int vet[10] = {2, 2, 6, 8, 10, 12, 14, 16, 18, 20};
  int vet2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int vet3[10];
  for(int i = 0; i < 10; i++){
    if(vet[i] == vet2[i])vet3[i] = 1;
    else vet3[i] = 0;
  }
  for(int i = 0; i < 10; i++){
    printf("%d ", vet[i]);
  }
  printf("\n");
  for(int i = 0; i < 10; i++){
    printf("%d ", vet2[i]);
  }
  printf("\n");
  for(int i = 0; i < 10; i++){
    printf("%d ", vet3[i]);
  }
  return 0;
}