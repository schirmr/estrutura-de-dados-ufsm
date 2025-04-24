#include <stdio.h>

void matTransposta(int m[2][3]){
  int mT[3][2];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++)printf("%d ", m[i][j]);
    printf("\n");
  }
  printf("\n");

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      mT[j][i] = m[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++)printf("%d ", mT[i][j]);
    printf("\n");
  }
}

int main(){
  int m[2][3] = {{1,9,48},{2,49,658}};
  matTransposta(m);
  return 0;
}