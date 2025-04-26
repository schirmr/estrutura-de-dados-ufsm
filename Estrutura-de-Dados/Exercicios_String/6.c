#include <stdio.h>
#include <string.h>

/* Estou pressupondo que voce vai usar so letras minusculas na url*/

int urlValido(char str[]) {
    if (strncmp("https://", str, 8) != 0) return 0;
    int limit, i;

    for (i = 8, limit = 3; str[i] != '\0'; i++) {
        if(str[i] != '.' && limit > 0) {
            if (str[i] < 97 || str[i] > 122)return 0;
            limit--;
        }
        else if (limit == 0 && str[i] != '.') {
            if (str[i] < 97 || str[i] > 122)return 0;
        }
        else if (str[i] == '.' && limit == 0) break;
        else return 0;
    }

    for (i = i+1; str[i] != '\0'; i++) {
        if (str[i] == '.') break;
        if (str[i] < 97 || str[i] > 122) return 0;
    }

    for (i = i+1,limit = 2; str[i] != '\0'; i++) {
        if (str[i] != '.' && limit > 0) {
            if (str[i] < 97 || str[i] > 122)return 0;
            limit--;
        }
        else if (limit == 0 && str[i] != '.') {
            if (str[i] < 97 || str[i] > 122)return 0;
        }
        else if (str[i] == '.' && limit == 0) break;
        else return 0;
    }

    for (;str[i] != '\0'; i++) {
        if ((str[i] < 97 && str[i] != '.' ) || (str[i] > 122 && str[i] != '.'))return 0;
    }

    return 1;
}

int main() {
    char str[] = "https://www.google.com.br";
    char str2[] = "https://www.ufsm.br";
    char str3[] = "https://www.schirmr.com.br";

    if (urlValido(str))printf("A url %s e valida\n", str);
    else printf("A url %s e invalida\n", str);

    if (urlValido(str2))printf("A url %s e valida\n", str2);
    else printf("A url %s e invalida\n", str2);

    if (urlValido(str3))printf("A url %s e valida\n", str3);
    else printf("A url %s e invalida\n", str3);

    return 0;
}