#include <stdio.h>

int main() {

    int escolha;

    printf("Selecione uma Peça: \n");
    printf("1- Torre\n");
    printf("2- Bispo\n");
    printf("3- Rainha\n");
    printf("4- Cavalo\n");  // Adicionando opção para o Cavalo
    scanf("%d", &escolha);

    if ((escolha > 0) && (escolha <= 4)) {
        switch (escolha) {
            case 1:
                // Movimento da Torre (5 casas para a direita)
                printf("Movimento da Torre:\n");
                // Usando o laço 'for' para mover a Torre
                for (int i = 1; i <= 5; i++) {
                    printf("Direita\n");
                }
                printf("\n");
                break;

            case 2:
                // Movimento do Bispo (5 casas na diagonal para cima e à direita)
                printf("Movimento do Bispo:\n");
                // Usando o laço 'while' para mover o Bispo
                int contador_bispo = 1;
                while (contador_bispo <= 5) {
                    printf("Cima Direita\n");
                    contador_bispo++;
                }
                printf("\n");
                break;

            case 3:
                // Movimento da Rainha (8 casas para a esquerda)
                printf("Movimento da Rainha:\n");
                // Usando o laço 'do-while' para mover a Rainha
                int contador_rainha = 1;
                do {
                    printf("Esquerda\n");
                    contador_rainha++;
                } while (contador_rainha <= 8);
                printf("\n");
                break;

            case 4:
                // Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda)
                printf("Movimento do Cavalo:\n");

                // Usando o laço 'for' para mover o Cavalo
                for (int i = 1; i <= 2; i++) {
                    printf("Baixo\n");  // Movimento para baixo
                }

                // Usando o laço 'while' para mover o Cavalo
                int contador_cavalo = 1;
                while (contador_cavalo <= 1) {
                    printf("Esquerda\n");  // Movimento para a esquerda
                    contador_cavalo++;
                }

                printf("\n");
                break;
        }
    } else {
        // Caso o número digitado seja inválido
        printf("Entrada inválida.\n");
    }

    return 0;
}
