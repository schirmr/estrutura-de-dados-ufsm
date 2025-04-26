#include <stdio.h>
#include <string.h>

void mascararString(char str[], int ini, int quant) {
    int tam = strlen(str);
    char strMascara[tam];
    for (int i = 0; i < tam; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            if (ini > 0) {
                strMascara[i] = '*';
                ini--;
            }
            else if (quant > 0) {
                strMascara[i] = str[i];
                quant--;
            }
            else strMascara[i] = '*';
        }
        else strMascara[i] = str[i];
    }
    printf("String: %s\nMascara: %s\n", str, strMascara);
}

int main() {
    char str[] = "991.614.580-66";
    mascararString(str, 3, 5);
    return 0;
}