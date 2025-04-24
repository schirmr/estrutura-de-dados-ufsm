#include <stdio.h>

/* programa que retorna a quantidade de caracteres da maior palavra existente em uma string */

void encontrarMaiorPalavra(char str[]) {
  int maior = 0;
  int aux = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {
      ++aux;
      if (aux > maior)maior = aux;
    }
    else {
      if (aux > maior) {
        maior = aux;
      }
      aux = 0;
    }
  }
  printf("%d", maior);
}

int main(){
  char str[] = {"testando a versao desse programa CARAMBOLAS"};
  printf("%s", str);
  encontrarMaiorPalavra(str);
  return 0;
}