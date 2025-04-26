#include <stdio.h>
#include <string.h>

typedef struct {
    int ini;
    int fim;
} Intervalo;

void construirIntervalos(char padrao[][4], int tamanho, Intervalo intervalos[]) {
    for (int i = 0; i < tamanho; i++) {
        if (strlen(padrao[i]) == 3 && padrao[i][1] == '-') {
            intervalos[i].ini = padrao[i][0];
            intervalos[i].fim = padrao[i][2];
        } else {
            intervalos[i].ini = padrao[i][0];
            intervalos[i].fim = padrao[i][0];
        }
    }
}

int caractereValido(char c, Intervalo intervalos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (c >= intervalos[i].ini && c <= intervalos[i].fim) {
            return 1;
        }
    }
    return 0;
}

int validarString(const char* str, char padrao[][4], int tamanhoPadrao) {
    Intervalo intervalos[tamanhoPadrao];

    construirIntervalos(padrao, tamanhoPadrao, intervalos);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!caractereValido(str[i], intervalos, tamanhoPadrao)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char padrao1[][4] = {"0-9", ".", "-"};
    char padrao2[][4] = {"0-9", ".", "-"};
    char padrao3[][4] = {"0-9", ".", "*"};

    printf("%d\n", validarString("991.614.580-66", padrao1, 3)); // Saída: 1 (válido)
    printf("%d\n", validarString("991.61a.580-66", padrao2, 3)); // Saída: 0 (inválido)
    printf("%d\n", validarString("991.614.580-66", padrao3, 3)); // Saída: 0 (inválido)

    return 0;
}