#include <stdio.h>
#include <stdlib.h>

void problem1(void) {
    printf("\nCASO 1\n");
    for(int i=1;i<=5;i++){
        for(int j =0;j<i;j++)printf("%d",i);
        printf("\n");
    }
}

void problem2(void) {
    printf("\nCASO 2\n");
    for (int i = 5; i > 0;i--) {
        for (int j = i; j > 0; j--) {
            printf("%d",j);
        }
        printf("\n");
    }
}

void problem3(void) {
    printf("\nCASO 3 COM VARIAVEL AUXILIAR\n");
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= i;j++) {
            printf("%d",j);
        }
        int x = i;
        while (x > 1) {
            --x;
            printf("%d", x);
        }
        printf("\n");
    }

}

void problem3_1(void) {
    printf("\nCASO 3 SEM USAR UMA VARIAVEL AUXILIAR\n");
    for (int i = 1;i <= 5;i++) {
        for (int j = 1;j <= i;j++) {
            if (j == i) {
                while (j > 0){
                    printf("%d",j);
                    j--;
                }
                j = i;
            }
            else printf("%d",j);
        }
        printf("\n");
    }
}

int main(){
    problem1();
    problem2();
    problem3();
    problem3_1();
    system("pause");
    return 0;
}