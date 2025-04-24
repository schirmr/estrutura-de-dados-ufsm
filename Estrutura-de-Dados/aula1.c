#include <stdio.h>
#include <stdlib.h>

void problem1(void) {
    for (int i = 0; i < 10; i++) {
        for (int j = i; j< 10;j++) {
            printf("-");
        }
        printf("\n");
    }
}

void problem2(void) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j< 10 ;j++) {
            if (j >= i)printf("-");
            else printf(" ");
        }
        printf("\n");
    }
}

void problem3(void) {
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j< 50 ;j++) {
            if (j<i)printf(" ");
            if (j >= i && j > i*2)printf("-");
        }
        printf("\n");
    }
}

int main(){
    problem3();
    system("pause");
    return 0;
}