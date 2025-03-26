#include <stdio.h>

int main () {

    char produtoA[30]= "Produto A";
    char produtoB[30]= "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    printf("O valor %s tem estoque %u e o falor unitário é R$ %.2f \n", produtoA, estoqueA, valorA);
    printf("O valor %s tem estoque %u e o falor unitário é R$ %.2f \n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O Produto %s tem percentual minimo %d\n", produtoA, resultadoA);
    printf("O Produto %s tem percentual minimo %d\n", produtoB, resultadoB);

    //comparação entre valores

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA)> (estoqueB * valorB));
}