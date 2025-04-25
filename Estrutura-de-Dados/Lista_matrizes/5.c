#include <stdio.h>

void matrizC(int mA[5][5], int mB[5][5]){
    int mC[5][5];
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(mA[i][j]==mB[i][j])mC[i][j]=1;
        else mC[i][j]=0;
      }
    }
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        printf("%d ",mC[i][j]);
      }
      printf("\n");
    }
}

int main() {
    int mA[5][5] = {{1,2,3,4,5},
                    {6,7,8,9,8},
                    {7,6,5,4,3},
                    {2,1,2,3,4},
                     {5,6,7,8,9}};
    int mB[5][5] = {{9,8,7,6,5},
                    {4,3,2,1,2},
                    {3,4,5,6,7},
                    {8,9,8,7,6},
                     {5,4,3,2,1}};
    matrizC(mA, mB);
    return 0;
}