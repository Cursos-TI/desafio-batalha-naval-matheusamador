#include <stdio.h>

int main() {
    int tabuleiro[10][10]; // matriz 10x10 do tabuleiro
    int i, j;

// Inicia o tabuleiro com 0 (água)
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

// Tamanho dos navios
    int tamanho_navio = 3;

// Coordenadas iniciais dos navios

// Navio horizontal linha 2, coluna 4
    int linha_h = 2;
    int coluna_h = 4;

// Navio vertical linha 5, coluna 7
    int linha_v = 5;
    int coluna_v = 7;

// Posiciona o navio horizontal
    for(j = 0; j < tamanho_navio; j++) {
        tabuleiro[linha_h][coluna_h + j] = 3;
    }

// Posiciona o navio vertical
    for(i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

// Exibe o tabuleiro com letras e números
    printf("     === TABULEIRO BATALHA NAVAL ===\n\n");

// Mostra as letras das colunas (A até J)
    printf("    ");
    for(j = 0; j < 10; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");

// Mostra as linhas com números e o conteúdo
    for(i = 0; i < 10; i++) {
        printf("%2d |", i + 1); // número da linha

        for(j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
