#include <stdio.h>

void movertorre(int casas){
    if(casas>0){
    printf("Direita \n");
    movertorre(casas -1);
}


}

void movebispo(int casas){
    if(casas>0){
        printf("Cima Direita \n");
        movebispo(casas -1);
    }

}

void moverainha(int casas){
    if (casas>0)
    {
        printf("Esquerda \n");
    moverainha(casas -1);
    }
  
}

void movercavalobaixo(int casas){
    if(casas>0){
        printf("Baixo\n");
        movercavalobaixo(casas -1);
    }
}

void movercavaloesquerda (int casas){

    if(casas>0){
        printf("Esquerda \n");
        movercavaloesquerda(casas -1);
    }

}


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

            movertorre(5);

                /*printf("Movimento da Torre:\n");
                for (int i = 1; i <= 5; i++) {
                    printf("Direita\n");
                }
                printf("\n");
                */
               break;

            case 2:

            movebispo(5);
                /* Movimento do Bispo (5 casas na diagonal para cima e à direita)
                printf("Movimento do Bispo:\n");
                // Usando o laço 'while' para mover o Bispo
                int contador_bispo = 1;
                while (contador_bispo <= 5) {
                    printf("Cima Direita\n");
                    contador_bispo++;
                }
                printf("\n");*/
                break;

            case 3:

                moverainha(8);
                /* Movimento da Rainha (8 casas para a esquerda)
                printf("Movimento da Rainha:\n");
                // Usando o laço 'do-while' para mover a Rainha
                int contador_rainha = 1;
                do {
                    printf("Esquerda\n");
                    contador_rainha++;
                } while (contador_rainha <= 8);
                printf("\n");*/
                break;

            case 4:

                movercavalobaixo(2);
                movercavaloesquerda(1);
                /* Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda)
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

                printf("\n");*/
                break;
        }
    } else {
        // Caso o número digitado seja inválido
        printf("Entrada inválida.\n");
    }

    return 0;
}
