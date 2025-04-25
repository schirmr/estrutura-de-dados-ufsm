#include <stdio.h>

void somaIndices(int m[4][5]){
  for(int i=0;i<4;i++){
    for(int j=0;j<5;j++){
      m[i][j] = i+j;
      printf("%d ",m[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int m[4][5] = {{0,0,0,0,0},
                  {0,0,0,0,0},
                  {0,0,0,0,0},
                  {0,0,0,0,0}};
  somaIndices(m);
  return 0;
}