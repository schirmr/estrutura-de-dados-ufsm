#include <stdio.h>
#include <string.h>

void subStringFunc(char str[], char subStr[], int tam){
  int j = 0;
  int result = -1;
  for(int i = 0; i < tam; i++){
    if(str[i] == subStr[0]){
      while(subStr[j] != '\0' && subStr[j] == str[i+j]){
        j++;
      }
      if(subStr[j] == '\0') {
        result = i;
        break;
      }
      j = 0;
    }
  }
  printf("%d\n", result);
}


int main(){
  char str[] = "Aula de estrurura de dados e programacao";
  char subStr[] = "ura";
  int tam = strlen(str);
  subStringFunc(str, subStr, tam);
  return 0;
}