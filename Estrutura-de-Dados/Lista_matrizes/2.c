#include <stdio.h>

void maiorAltura(int m[5][11]){
int vetMaiores[5] = {0};
  for(int i = 0; i < 5; i++){
    for(int j = 1; j < 11; j++){
      if(m[i][j] > vetMaiores[i])vetMaiores[i] = m[i][j];
    }
  }
  for(int i = 0; i < 5; i++) {
    printf("Maior altura da delegacao %d: %dcm\n", i,vetMaiores[i]);
  }
}

int main() {
  int m[5][11] = {{1,175,180,150,165,170,175,180,190,150,191},
                  {2,160,169,175,193,183,163,190,193,203,155},
                  {3,175,175,175,175,175,175,175,160,190,178},
                  {4,201,200,165,180,185,169,178,193,175,178},
                  {5,177,187,186,195,158,172,175,155,157,165}};
  maiorAltura(m);
  return 0;
}