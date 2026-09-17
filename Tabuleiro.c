#include <stdio.h>


int main() {
    
    int tabuleiro[10][10];
    int Navio = 3;
    int x, y;

    
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            tabuleiro[x][y] = 0;
        }
    }

  
    int Linha = 2, Coluna = 1;
    
    
    int Linha2 = 5, Coluna2 = 7;


    for (x = 0; x < Navio; x++) {
        tabuleiro[Linha][Coluna + x] = 3;
    }

    
    for (y = 0; y < Navio; y++) {
        tabuleiro[Base2 + y][Coluna2] = 3;
    }

    // 6. Exibição do Tabuleiro
    printf("--- TABULEIRO BATALHA NAVAL ---\n\n");
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            printf("%d ", tabuleiro[x][y]);
        }
        printf("\n"); 
    }

    return 0;
}
