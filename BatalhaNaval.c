#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10


int main() {
    
    int matriz [LINHAS][COLUNAS] = {0};
    
    int naviosV = 5;
    int naviosVF = 7;
    
    int naviosH = 2;
    int naviosHF = 4;  
    
    int naviosD = 1;
    int naviosDF = 3;
    
    for (int i = 0; i < 3; i++) {
        matriz[naviosD + i][naviosDF + i] = 3;
    }
    
    for (int i = 0; i < 3; i++) {
        matriz[naviosV][naviosVF + i] = 3;
    }
    
    for (int i = 0; i < 3; i++) {
        matriz[naviosHF + i][naviosH] = 3;
    }
    
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
        printf("%d ", matriz[i][j]);
    }
        
printf("\n");
    }
    
    
    
return 0;
}
