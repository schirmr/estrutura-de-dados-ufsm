#include <stdio.h>

void matrizDiagonal(int lin, int col){
  if(lin == col)printf("Sim, o maior numero esta na diagonal principal");
  else printf("Nao, o maior numero nao esta na diagonal principal");
}

void maiorNumero(int m[3][3]){
  int lin, col, maior = 0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(m[i][j]>maior){
        maior = m[i][j];
        lin = i;
        col = j;
      }
    }
  }
  matrizDiagonal(lin, col);
}

int main() {
    int m[3][3] = {{1,175,160},
                    {2,180,169},
                    {3,175,175}};
    maiorNumero(m);
    return 0;
}