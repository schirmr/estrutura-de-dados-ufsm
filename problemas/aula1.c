#include <stdio.h>

void problema1(){
  for(int i = 0; i < 10; i++){
    for(int j = i; j < 10; j++){
      printf("-");
    }
    printf("\n");
  }
}

void problema2() {
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if (i>j)printf(" ");
      else printf("-");
    }
    printf("\n");
  }
}

void problema3() {
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      if (j<i)printf(" ");
      else if (j > i*2)printf("-");
    }
    printf("\n");
  }
}

int main(void) {
  problema1();
  problema2();
  problema3();
  return 0;
}