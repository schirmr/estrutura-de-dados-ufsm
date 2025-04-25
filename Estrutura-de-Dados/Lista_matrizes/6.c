#include <stdio.h>

void matrizC(int m[4][5], int vet[4]){
  for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
      vet[i]+=m[i][j];
    }
  }
  for(int i=0;i<4;i++){
    printf("%d ",vet[i]);
  }
}

int main() {
    int m[4][5] = {{1,2,3,4,5},
                    {6,7,8,9,8},
                    {7,6,5,4,3},
                    {2,1,2,3,4}};
    int vet[4] = {0,0,0,0};
    matrizC(m, vet);
    return 0;
}