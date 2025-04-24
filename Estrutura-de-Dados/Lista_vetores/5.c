#include <stdio.h>

int main(){
    int vet[] = {12, 35, 25, 14, 1, 85, 10, 110, 44 , 996};
    int tam = sizeof(vet)/sizeof(vet[0]);
    printf("Antes da mudanca:\n");
    for(int i = 0; i < tam; i++)printf("%d ", vet[i]);

    int aux = vet[tam-1];
    vet[tam-1] = vet[0];
    for(int i = tam-2; i>=0;i--){
        int aux2 = vet[i];
        vet[i] = aux;
        aux = aux2;
    }

    printf("\nDepois da mudanca:\n");
    for(int i = 0; i < tam; i++)printf("%d ", vet[i]);
    return 0;
}