#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* Não irei tratar o caso de ser inserido um numero */

void descriptografar(char str[], int tam, int cript) {
  printf("\nDescriptografar a Cifra de Cesar:\n");
  for (int i = 0; i < tam; i++) {
    if ((str[i] - cript) < 65) str[i] = (str[i] - cript) + 26;
    else str[i] = str[i]-cript;
    printf("%c", str[i]);
  }
}

void cifraDeCesar(char str[], int tam, int cript) {
  printf("Criptografar a Cifra de Cesar:\n");
  for (int i =0; i < tam; i++) {
    if (str[i] >= 97 && str[i] <= 122) str[i] = toupper(str[i]);
    if ((str[i] + cript) > 90) str[i] = (str[i] + cript) - 26;
    else str[i] = str[i]+cript;
    printf("%c", str[i]);
  }
}

int main(){
  char str[5] = "CASW";
  cifraDeCesar(str, strlen(str), 5);
  descriptografar(str, strlen(str), 5);
  return 0;
}