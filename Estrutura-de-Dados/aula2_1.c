#include <stdio.h>
#include <stdlib.h>

void problem1(void) {
    printf("\nCASO 1 - Dois lacos de repeticao\n");
    for (int i = 1; i <= 10;i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", i+j);
        }
        printf("\n");
    }
}

void problem2(void) {
    printf("\nCASO 2 - Um laco de repeticao\n");
    int j = 1;
    for (int i = 1; i <= 100;i++) {
        printf("%d ", j);
        if (i%10 == 0) {
            printf("\n");
            j = (i / 10) + 1;
        }
        else j++;
    }
}

int main() {
    printf("Exercicio 2\n");
    /*problem1();*/
    problem2();
    system("pause");
}