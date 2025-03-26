#include <stdio.h>

int main (){

    float temperatura, umidade;
    unsigned int stock, StockMinimo = 1000;

    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Digite a umidade: \n");
    scanf("%f", &umidade);

    printf("Digite a quantidade de estoque: \n");
    scanf("%u", &stock);

    if (temperatura > 30) {
        printf("A temperatura está alta! \n");
    } else {
        printf("Temperatura dentro dos parâmetros. \n");
    }

    if (umidade > 50) {
        printf("Umidade elevada. \n");
    } else {
        printf("Umidade dentro dos parâmetros. \n");
    }

    if (stock < StockMinimo) {
        printf("Estoque baixo! \n");
    } else {
        printf("Estoque dentro dos parâmetros. \n");
    }

    return 0;
}
