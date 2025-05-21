#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas iniciais dos navios
    int navio_horizontal_linha = 2;
    int navio_horizontal_coluna = 4;

    int navio_vertical_linha = 5;
    int navio_vertical_coluna = 1;

    int navio_diagonal_linha = 0;
    int navio_diagonal_coluna = 0;

    int navio_diagonal_2_linha = 0;
    int navio_diagonal_2_coluna = 7;

    // Posiciona o navio horizontal (tamanho 3)
    for (i = 0; i < 3; i++) {
        tabuleiro[navio_horizontal_linha][navio_horizontal_coluna + i] = 3;
    }

    // Posiciona o navio vertical (tamanho 3)
    for (i = 0; i < 3; i++) {
        tabuleiro[navio_vertical_linha + i][navio_vertical_coluna] = 3;
    }

    // posiciona o navio diagonalmente navio 1

    for (i = 0; i < 3; i++) {
        tabuleiro[navio_diagonal_linha + i][navio_diagonal_coluna +i] = 3;
    }

        // posiciona o navio diagonalmente navio 2

    for (i = 0; i < 3; i++) {
        tabuleiro[navio_diagonal_2_linha + i][navio_diagonal_2_coluna +i] = 3;
    }

    // Imprime o tabuleiro
    printf("Tabuleiro Batalha Naval:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
