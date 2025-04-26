#include <stdio.h>
#include <string.h>

/*Desenvolva um algoritmo para ler pelo menos duas strings e apresentá-las em ordem alfabética.*/
int main(){
  char str[20];
  char str2[20];
  printf("Digite uma string:\n");
  scanf("%19s", str);
  printf("Digite outra string:\n");
  scanf("%19s", str2);
  for (int i = 0; str[i] != '\0' && str2[i] != '\0' ; i++) {
    if (str[i] != str2[i]) {
      if (str[i] > str2[i]) printf("%s\n%s\n", str2, str);
      else printf("%s\n%s\n", str, str2);
      break;
    }
    if (str[i+1] == '\0')printf("%s\n%s\n", str, str2);
    else if (str2[i+1] == '\0')printf("%s\n%s\n", str2, str);
  }
  return 0;
}