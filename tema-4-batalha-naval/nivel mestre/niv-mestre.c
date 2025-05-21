#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navios (valor 3)
    for (i = 0; i < 3; i++) {
        tabuleiro[2][4 + i] = 3;        // Navio horizontal
        tabuleiro[5 + i][1] = 3;        // Navio vertical
        tabuleiro[0 + i][0 + i] = 3;    // Diagonal 1
        tabuleiro[0 + i][7 + i] = 3;    // Diagonal 2
    }

    // ---------- HABILIDADE CONE ----------
    int origem_cone_linha = 6;
    int origem_cone_coluna = 6;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            // condição de cone (abrindo para baixo)
            if (i >= j - 2 && i >= 2 - j) {
                int linha = origem_cone_linha - 2 + i;
                int coluna = origem_cone_coluna - 2 + j;

                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (tabuleiro[linha][coluna] == 0) {
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    }

    // ---------- HABILIDADE CRUZ ----------
    int origem_cruz_linha = 3;
    int origem_cruz_coluna = 3;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                int linha = origem_cruz_linha - 2 + i;
                int coluna = origem_cruz_coluna - 2 + j;

                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (tabuleiro[linha][coluna] == 0) {
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    }

    // ---------- HABILIDADE OCTAEDRO ----------
    int origem_octa_linha = 7;
    int origem_octa_coluna = 2;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            // condição do losango
            if ((i + j >= 2) && (i + j <= 6) && (j - i <= 2) && (i - j <= 2)) {
                int linha = origem_octa_linha - 2 + i;
                int coluna = origem_octa_coluna - 2 + j;

                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (tabuleiro[linha][coluna] == 0) {
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    }

    // ---------- IMPRIME O TABULEIRO ----------
    printf("Tabuleiro Batalha Naval:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
